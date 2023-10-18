/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:05:19 by prachman          #+#    #+#             */
/*   Updated: 2023/10/18 19:21:23 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SPAN_HPP
#define	SPAN_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cstdlib>

class	Span
{
	private:
		std::vector<int>	_arr;
		unsigned int		_size;
	
	public:
		Span(void);
		Span(unsigned int n);
		Span(const Span& obj);
		Span& operator=(const Span& obj);
		~Span();

		void			printElement();
		void			addNumber(int num);
		void			addRangeOfNumber(int amt);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

		class	MaxmimunSizeException : public std::exception{
			virtual const char* what() const throw() {return "Reached maxmimum capacity";};
		};
		class	 InvalidSpanException: public std::exception {
			virtual const char* what() const throw() {return "No number stored or there's only one number";};
		};
};

int				randomNumber();


#endif
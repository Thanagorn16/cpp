/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:05:19 by prachman          #+#    #+#             */
/*   Updated: 2023/11/18 17:05:38 by truangsi         ###   ########.fr       */
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

		void			printElement(void);
		void			addNumber(int num);
		void			addRangeOfNumber(int amt);
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);

		class	MaxmimunSizeException : public std::exception{
			virtual const char* what() const throw() {return "Reached maxmimum capacity";};
		};
		class	 InvalidSpanException: public std::exception {
			virtual const char* what() const throw() {return "No number stored or there's only one number";};
		};
};

int	randomNumber(void);


#endif
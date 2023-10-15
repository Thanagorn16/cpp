/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:48:00 by prachman          #+#    #+#             */
/*   Updated: 2023/10/15 19:23:56 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ARRAY_HPP
#define	ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class	Array
{
	private:
		T*				_arr;
		unsigned int	_size;

	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array& obj);
		Array&	operator=(const Array& obj);
		~Array(void);

		unsigned int	size() const;

		T&		operator[](unsigned int index);

		class	IndexOutOfBoundsException : public std::exception
		{
			public:
				virtual const char* what() const throw() {return "Index is out of bounds";};
		};
};

#include "Array.tpp"

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:48:00 by prachman          #+#    #+#             */
/*   Updated: 2023/10/14 09:27:58 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ARRAY_HPP
#define	ARRAY_HPP

#include <iostream>

template <typename T>
class	Array
{
	private:

	public:
		T*				_arr;
		size_t			_size; // should be able to change?
		Array(void);
		Array(unsigned int n);
		Array(const Array& obj);
		Array& operator=(const Array& obj);
		~Array(void);

		size_t	getSize();
};

#include "Array.tpp"

#endif
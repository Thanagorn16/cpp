/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 09:54:33 by prachman          #+#    #+#             */
/*   Updated: 2023/10/13 11:59:42 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ITER_HPP
#define	ITER_HPP

#include <iostream>

template <typename T>
void	iter(T* arrAddress, size_t length, void (*func)(T&))
{
	for (size_t i = 0; i < length; i++)
		func(arrAddress[i]);
}

template <typename T>
void	iter(T * arrAddress, size_t length, void (*func)(const T&))
{
	for (size_t i = 0; i < length; i++)
		func(arrAddress[i]);
}

#endif

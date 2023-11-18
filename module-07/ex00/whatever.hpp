/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 08:47:42 by prachman          #+#    #+#             */
/*   Updated: 2023/11/18 11:32:19 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WHATEVER_HPP
#define	WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T& a, T& b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	min(T& a, T& b) {return ((a < b) ? a : b);}

template <typename T>
T	max(T& a, T& b) {return ((a > b) ? a : b);}

#endif

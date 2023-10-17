/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:17:39 by prachman          #+#    #+#             */
/*   Updated: 2023/10/17 15:22:32 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	EASYFIND_HPP
#define	EASYFIND_HPP

#include <iostream>
#include <list>
#include <vector>
#include <exception>
#include <algorithm>


class	ValueNotFoundException : public std::exception
{
	public:
		virtual const char *what() const throw() {return "Value not found";};
};

template <typename T>
int	easyfind(T& val1, int val2)
{
	typename T::iterator	it = std::find(val1.begin(), val1.end(), val2);
	if (it != val1.end())
		return std::distance(val1.begin(), it);
	throw ValueNotFoundException();
}

#endif
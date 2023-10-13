/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 09:01:54 by prachman          #+#    #+#             */
/*   Updated: 2023/10/13 09:10:25 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main()
{
	int	a = 1;
	int	b = 2;
	int	c = 1;
	int	d;

	swap(a, b);
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	swap(a, b);
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	
	d = min(a, b);
	std::cout << "d: " << d << std::endl;
	d = max(a, b);
	std::cout << "d: " << d << std::endl;
	d = max(a, c);
	std::cout << "d: " << d << std::endl;

	return (0);
}
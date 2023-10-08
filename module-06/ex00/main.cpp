/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:05:16 by prachman          #+#    #+#             */
/*   Updated: 2023/10/08 22:37:41 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>

int main()
{
	ScalarConverter::convert("42.123f");
	ScalarConverter::convert("42.123");
	ScalarConverter::convert("42");
	ScalarConverter::convert("42f");
	ScalarConverter::convert("42fsadd");
	ScalarConverter::convert("42ffff");
	ScalarConverter::convert("42...123");
	ScalarConverter::convert("0");
	ScalarConverter::convert("127");
	ScalarConverter::convert("2147483647");
	ScalarConverter::convert("2147483648");
	ScalarConverter::convert("-2147483648");
	ScalarConverter::convert("-2147483649");
	// float	a = atof("2147483648");
	// int	a = atoi("2147483648");
	// std::cout << "a: " << a << std::endl;
}
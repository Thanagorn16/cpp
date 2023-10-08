/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:05:16 by prachman          #+#    #+#             */
/*   Updated: 2023/10/08 14:08:26 by prachman         ###   ########.fr       */
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
	// char	a = 126;
	// float	b = 1123;
	// std::cout << b << std::endl;
	// if (isprint(126))
	// 	std::cout << "yes" << std::endl;
	// {
	// 	// ! to char
	// 	int	a = 42;
	// 	char	b = a;
	// 	std::cout << b << std::endl;
	// 	float	c = 42.423f;
	// 	char	d = c;
	// 	// std::cout << b << std::endl;
	// 	// int	b = atoi(a.c_str());
	// 	std::cout << d << std::endl;
	// }
	// {
	// 	std::string	s = "      14.123";
	// 	std::stringstream	myNum;
	// 	float x = 0;
		
	// 	myNum << s;
	// 	myNum >> x;
	// 	std::cout << x << std::endl;
	// 	if (myNum.fail())
	// 		std::cout << "failed" << std::endl;
	// 	// for (int i = 0; s[i]; i++)
	// 	// {
	// 	// 	if (s[i] == ' ')
	// 	// 		continue;
	// 	// 	std::cout << s[i] << std::endl;
	// 	// }
	// }
}
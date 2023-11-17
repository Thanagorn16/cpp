/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:05:16 by prachman          #+#    #+#             */
/*   Updated: 2023/11/17 12:10:16 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>

int main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	ScalarConverter::convert(av[1]);
}

// int main()
// {
// 	ScalarConverter::convert("-inf");
// 	ScalarConverter::convert("inff");
// 	ScalarConverter::convert("-inff");
// 	ScalarConverter::convert("nan");
// 	ScalarConverter::convert("nanf");
// 	ScalarConverter::convert("42.123f");
// 	ScalarConverter::convert("42.123");
// 	ScalarConverter::convert("42");
// 	ScalarConverter::convert("42.0");
// 	ScalarConverter::convert("42f");
// 	ScalarConverter::convert("42fsadd");
// 	ScalarConverter::convert("42ffff");
// 	ScalarConverter::convert("42...123");
// 	ScalarConverter::convert("0");
// 	ScalarConverter::convert("127");
// 	ScalarConverter::convert("2147483647");
// 	ScalarConverter::convert("2147483648");
// 	ScalarConverter::convert("-2147483648");
// 	ScalarConverter::convert("-2147483649");
// 	ScalarConverter::convert("100000000000000000000000000000000000000");
// 	ScalarConverter::convert("-100000000000000000000000000000000000000");
// 	ScalarConverter::convert("1000000000000000000000000000000000000000");
// 	ScalarConverter::convert("-1000000000000000000000000000000000000000");
// 	ScalarConverter::convert("inf");
// 	ScalarConverter::convert("+inf");
// 	ScalarConverter::convert("-inf");
// 	ScalarConverter::convert("inff");
// 	ScalarConverter::convert("-inff");
// 	ScalarConverter::convert("nan");
// 	ScalarConverter::convert("nanf");
// 	ScalarConverter::convert("-1000000000000000000000000000000000000000");
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:13:49 by prachman          #+#    #+#             */
/*   Updated: 2023/12/11 14:16:58 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	std::stack<int>	stack;
	std::string 	arg = static_cast<std::string>(av[1]);

	if (ac != 2)
		return (std::cout << "Error: invalid argument" << std::endl, 0);
	for (size_t i = 0; i < arg.length(); i++)
	{
		int	num = 0;
		if (arg[i] == ' ')
			continue ;
		if (isdigit(arg[i]))
		{
			int	pos = i;
			int	len = 0;
			for (int j = pos; isdigit(arg[j]); j++)
				len++;
			std::string str;
			if (len) // if it's digit, convert to int
			{
				str = arg.substr(pos, len);
				std::stringstream	converter;
				converter << str;
				converter >> num;
				if (num > 10)
					return (std::cout << "Error: number must be less than [ 10 ]: " << num << std::endl, 0);
			}
			i += len;
		}
		int	res = makeStack(arg[i], stack, num);
		if (res == 1) //if stack stores number
			continue ;
		else if (res == 2) // if stack makes calculation
		{
			if (stack.size() == 2 && arg[i + 1] != '\0')
				continue ;
			if (stack.size() > 1)
				return (std::cout << "Error: invalid" << std::endl, 0);
		}
		else
			return 0;
	}
	std::cout << stack.top() << std::endl;
}
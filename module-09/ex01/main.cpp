/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:13:49 by prachman          #+#    #+#             */
/*   Updated: 2023/11/29 12:47:16 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	doOperation(int a, int b, char op)
{
	switch (op)
	{
		case '+':
			return a + b;
		case '-':
			return a - b;
		case '*':
			return a * b;
		case '/':
			return a / b;
		default:
			return 0;
	}
}

int main(int ac, char **av)
{
	std::stack<int>	stack;
	std::string 	arg = static_cast<std::string>(av[1]);
	int				first;
	int				second;
	int				res;

	if (ac != 2)
		return (std::cout << "Error: invalid argument" << std::endl, 0);
	for (size_t i = 0; i < arg.length(); i++)
	{
		int	num;
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
				// std::cout << num << std::endl;
			}
			i += len;
		}
		if (arg[i] == ' ')
			stack.push(num);
		else if (arg[i] == '+' || arg[i] == '-' || arg[i] == '*' || arg[i] == '/')
		{
			first = stack.top();
			stack.pop();
			second = stack.top();
			stack.pop();
			res = doOperation(second, first, arg[i]);
			stack.push(res);
			// std::cout << stack.top() << std::endl;
		}
		else
			return (std::cout << "Error: invalid character " << arg[i] << std::endl, 0);
		
	}
}
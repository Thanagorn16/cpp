/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:13:49 by prachman          #+#    #+#             */
/*   Updated: 2023/11/30 10:16:52 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	doOperation(int a, int b, char op)
{
	if (a == 0 && op == '/')
	{
		std::cout << "Error: dividing by 0 is undefined" << std::endl;
		exit(0);
	}
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

int	makeStack(char c, std::stack<int> &stack, int num )
{
	int				first;
	int				second;
	int				res;

	if (c == ' ') // store number
		stack.push(num);
	else if (c == '+' || c == '-' || c == '*' || c == '/')
	{
		first = stack.top();
		stack.pop();
		if (stack.empty()) // case of operator after operator but no element to do the operation with
			return (std::cout << "Error: invalid" << std::endl, 0);
		second = stack.top();
		stack.pop();
		res = doOperation(second, first, c);
		stack.push(res);
		return 2;
	}
	else
		return (std::cout << "Error: wrong expression" << std::endl, 0);
		// return (std::cout << "Error: invalid character " << c << std::endl, 0);
	return (1);
}

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
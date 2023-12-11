/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:16:28 by truangsi          #+#    #+#             */
/*   Updated: 2023/12/11 14:21:17 by truangsi         ###   ########.fr       */
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
	return (1);
}
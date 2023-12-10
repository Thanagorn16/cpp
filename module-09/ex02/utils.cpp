/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:49:18 by prachman          #+#    #+#             */
/*   Updated: 2023/12/08 14:23:02 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	printErrorArg(char *val)
{
	std::cout << "Error: invalid argument => " << val << std::endl;
}

void	printPair(std::vector<t_pair> vecPair)
{
	for (std::vector<t_pair>::iterator it = vecPair.begin(); it != vecPair.end(); ++it)
	{
		std::cout << it->top << " ";
		std::cout << it->bot << " ";
		std::cout << "| ";
	}
	std::cout << std::endl;
}

void	printSPend(std::vector<int> s, std::vector<int> pend)
{
	for(std::vector<int>::iterator it = s.begin(); it != s.end(); ++it)
		std::cout << "s: " << *it << std::endl;
	std::cout << std::endl;
	for(std::vector<int>::iterator it = pend.begin(); it != pend.end(); ++it)
		std::cout << "pend: " << *it << std::endl;
}

bool	strIsDigit(char *s)
{
	std::string str = static_cast<std::string>(s);
	std::string::const_iterator it = str.begin();

	while (it != str.end() && isdigit(*it)) ++it;
	return !str.empty() && it == str.end();
}

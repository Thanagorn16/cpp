/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 12:41:30 by prachman          #+#    #+#             */
/*   Updated: 2023/12/03 13:20:20 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	printErrorArg(char *val)
{
	std::cout << "Error: invalid argument => " << val << std::endl;
}

bool	strIsDigit(char *s)
{
	std::string str = static_cast<std::string>(s);
	std::string::const_iterator it = str.begin();

	while (it != str.end() && isdigit(*it)) ++it;
	return !str.empty() && it == str.end();
}

int	main(int ac, char **av)
{
	if (ac <= 2)
		return (std::cout << "Error: there must be at least 2 arguments to sort." << std::endl, 0);
	int	size = ac - 1;
	int *arr = new int [size];
	for (int i = 1; av[i]; i++)
	{
		if (!strIsDigit(av[i]))
			return (printErrorArg(av[i]), 0);
		int tmp = atoi(av[i]);
		if (tmp < 0)
			return (printErrorArg(av[i]), 0);
		arr[i - 1] = tmp;
	}
	
	// if the total number of elements is odd number, pop the last element
	std::vector<int> myVec(arr, arr + size);
	int lst;
	if (myVec.size() % 2 != 0)
	{
		lst = myVec.back();
		myVec.pop_back();
	}

	// sort elements and add to struct t_pair
	int	vecSize = myVec.size();
	std::vector<t_pair>	vecPair(vecSize / 2);
	int j = 0;
	for (int i = 0; i < vecSize; i += 2)
	{
		if (myVec[i] < myVec[i + 1])
		{
			vecPair[j].top =  myVec[i];
			vecPair[j].bot =  myVec[i + 1];
		}
		else
		{
			vecPair[j].top =  myVec[i + 1];
			vecPair[j].bot =  myVec[i];
		}
		j++;
	}
	for (std::vector<t_pair>::iterator it = vecPair.begin(); it != vecPair.end(); ++it)
	{
		std::cout << it->top << std::endl;
		std::cout << it->bot << std::endl;
	}
	// for (int i = 0; arr[i]; i++)
	// 	std::cout << arr[i] << std::endl;
}
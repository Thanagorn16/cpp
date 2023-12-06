/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 12:41:30 by prachman          #+#    #+#             */
/*   Updated: 2023/12/06 22:17:35 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	checkAscending(std::vector<int> const & nums);

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
	int popLst = myVec.size() % 2 != 0;
	if (popLst)
	{
		lst = myVec.back();
		myVec.pop_back();
	}

	// sort elements and add to struct t_pair
	int	pairSize = myVec.size() / 2;
	std::vector<t_pair>	vecPair(pairSize);
	for (int i = 0, j = 0; j < pairSize; i += 2, j++)
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
	}
	// printPair(vecPair);

	// use merge-sort algorithm to sort the sequences in the vector
	mergeSort(vecPair, 0, vecPair.size() - 1);
	// printPair(vecPair);
	
	// create s and pend to store result from merge-sort algorithm
	std::vector<int> s(vecPair.size());
	std::vector<int> pend(vecPair.size());
	for (size_t i = 0; i < vecPair.size(); i++) s[i] = vecPair[i].bot;
	for (size_t i = 0; i < vecPair.size(); i++) pend[i] = vecPair[i].top;
	if (popLst)
		pend.push_back(lst);
	
	// push first from pend to first of s
	size_t	totalSize = s.size() + pend.size();
	s.insert(s.begin(), pend[0]);
	// printSPend(s, pend);
	// get jacobsthal position
	int	pendSize = pend.size() - 1; //count with index
	int jacobsthal[] = {1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 
						5461, 10923, 21845, 43691, 87381, 174763, 349525, 
						699051, 1398101, 2796203, 5592405, 11184811, 22369621, 
						44739243, 89478485, 178956971, 357913941, 715827883, 1431655765};
	int	insertArea = 0;
	for (int i = 1; s.size() < totalSize; i++)
	{
		int	jPos = jacobsthal[i] - 1; // get 3 position belongs to pend
		if (pendSize < jPos) // if jacobsthal is more than size of pend
			jPos = pendSize;
		insertArea = jPos + jacobsthal[i - 1];
		while (jPos >= jacobsthal[i - 1])
		{
			std::vector<int>::iterator lowPos = std::lower_bound(s.begin(), s.begin() + insertArea, pend[jPos]);
			s.insert(lowPos, pend[jPos]);
			jPos--;
		}
	}
	for (std::vector<int>::iterator it = s.begin(); it != s.end(); ++it)
		std::cout << *it << " ";
	checkAscending(s);
}

void	checkAscending(std::vector<int> const & nums)
{
	for (std::vector<int>::const_iterator it = nums.begin(); it + 1 != nums.end(); it++)
	{
		if (*it > *(it + 1)) {
			std::cout << "error" << std::endl;
			return ;
			// return prtErrMsg(str + "No, number is not asceding order !!!");
		}
	}
	std::cout << "okay" << std::endl;
	// std::cerr << GREEN << str + "OK,number is ascending Order." << RESET << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 12:41:30 by prachman          #+#    #+#             */
/*   Updated: 2023/12/05 14:01:58 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	merge(std::vector<t_pair> &vecPair, int start, int halfPoint, int end)
{
	// create 2 arrays with first half and second half of items in vecPair
	int	firstHalf = halfPoint - start + 1;
	int	secondHalf = end - halfPoint;
	t_pair A[firstHalf], B[secondHalf];
	
	for (int i = 0; i < firstHalf; i++)
		A[i] = vecPair[start + i];
	for (int i = 0; i < secondHalf; i++)
		B[i] = vecPair[halfPoint + 1 + i];

	int i, j, k;
	i = 0;
	j = 0;
	k = start;
	
	// sort the numbers among A & B, then put place them to vecPair
	while (i < firstHalf && j < secondHalf)
	{
		if (A[i].bot <= B[j].bot)
			vecPair[k++] = A[i++];
		else
			vecPair[k++] = B[j++];
	}

	// if run out of the items in the vector
	//copy the remaining items from A & B to it
	while (i < firstHalf)
		vecPair[k++] = A[i++];
	while (j < secondHalf)
		vecPair[k++] = B[j++];
}

void	mergeSort(std::vector<t_pair> &vecPair, int start, int end)
{
	if (start >= end)
		return ;
	int halfPoint = start + (end - start) / 2;
	mergeSort(vecPair, start, halfPoint);
	mergeSort(vecPair, halfPoint + 1, end);
	merge(vecPair, start, halfPoint, end);
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
	mergeSort(vecPair, 0, vecPair.size() - 1);
	// printPair(vecPair);
	(void) lst;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:22:14 by prachman          #+#    #+#             */
/*   Updated: 2023/12/11 14:39:07 by truangsi         ###   ########.fr       */
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

std::vector<t_pair>	createPair(std::vector<int> myVec)
{
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
	return (vecPair);
}

std::vector<int>	operateVector(int *arr, int size)
{
	std::vector<int> myVec(arr, arr + size);
	int lst;
	int popLst = myVec.size() % 2 != 0;
	if (popLst)
	{
		lst = myVec.back();
		myVec.pop_back();
	}

	// sort elements and add to struct t_pair
	std::vector<t_pair> vecPair = createPair(myVec);

	// use merge-sort algorithm to sort the sequences in the vector
	mergeSort(vecPair, 0, vecPair.size() - 1);

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
	return s;
	// checkAscending(s);
}

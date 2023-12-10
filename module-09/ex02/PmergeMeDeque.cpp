/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMeDeque.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:22:14 by prachman          #+#    #+#             */
/*   Updated: 2023/12/09 19:25:05 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	merge(std::deque<t_pair> &deqPair, int start, int halfPoint, int end)
{
	// create 2 arrays with first half and second half of items in deqPair
	int	firstHalf = halfPoint - start + 1;
	int	secondHalf = end - halfPoint;
	t_pair A[firstHalf], B[secondHalf];
	
	for (int i = 0; i < firstHalf; i++)
		A[i] = deqPair[start + i];
	for (int i = 0; i < secondHalf; i++)
		B[i] = deqPair[halfPoint + 1 + i];

	int i, j, k;
	i = 0;
	j = 0;
	k = start;
	
	// sort the numbers among A & B, then put place them to deqPair
	while (i < firstHalf && j < secondHalf)
	{
		if (A[i].bot <= B[j].bot)
			deqPair[k++] = A[i++];
		else
			deqPair[k++] = B[j++];
	}

	// if run out of the items in the deque
	//copy the remaining items from A & B to it
	while (i < firstHalf)
		deqPair[k++] = A[i++];
	while (j < secondHalf)
		deqPair[k++] = B[j++];
}

void	mergeSort(std::deque<t_pair> &deqPair, int start, int end)
{
	if (start >= end)
		return ;
	int halfPoint = start + (end - start) / 2;
	mergeSort(deqPair, start, halfPoint);
	mergeSort(deqPair, halfPoint + 1, end);
	merge(deqPair, start, halfPoint, end);
}

std::deque<t_pair>	createPair(std::deque<int> myDeq)
{
	// sort elements and add to struct t_pair
	int	pairSize = myDeq.size() / 2;
	std::deque<t_pair>	deqPair(pairSize);
	for (int i = 0, j = 0; j < pairSize; i += 2, j++)
	{
		if (myDeq[i] < myDeq[i + 1])
		{
			deqPair[j].top =  myDeq[i];
			deqPair[j].bot =  myDeq[i + 1];
		}
		else
		{
			deqPair[j].top =  myDeq[i + 1];
			deqPair[j].bot =  myDeq[i];
		}
	}
	return (deqPair);
}

std::deque<int>	operateDeque(int *arr, int size)
{
	std::deque<int> myDeq(arr, arr + size);
	int lst;
	int popLst = myDeq.size() % 2 != 0;
	if (popLst)
	{
		lst = myDeq.back();
		myDeq.pop_back();
	}

	// sort elements and add to struct t_pair
	std::deque<t_pair> deqPair = createPair(myDeq);

	// use merge-sort algorithm to sort the sequences in the deque
	mergeSort(deqPair, 0, deqPair.size() - 1);
	
	// create s and pend to store result from merge-sort algorithm
	std::deque<int> s(deqPair.size());
	std::deque<int> pend(deqPair.size());
	for (size_t i = 0; i < deqPair.size(); i++) s[i] = deqPair[i].bot;
	for (size_t i = 0; i < deqPair.size(); i++) pend[i] = deqPair[i].top;
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
			std::deque<int>::iterator lowPos = std::lower_bound(s.begin(), s.begin() + insertArea, pend[jPos]);
			s.insert(lowPos, pend[jPos]);
			jPos--;
		}
	}
	return s;
	// for (std::deque<int>::iterator it = s.begin(); it != s.end(); ++it)
	// 	std::cout << *it << " ";
	// checkAscending(s);
}
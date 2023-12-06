/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:22:14 by prachman          #+#    #+#             */
/*   Updated: 2023/12/05 14:22:39 by prachman         ###   ########.fr       */
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
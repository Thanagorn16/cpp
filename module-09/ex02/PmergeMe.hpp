/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 12:40:31 by prachman          #+#    #+#             */
/*   Updated: 2023/12/11 14:26:38 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_MERGE_ME_HPP
#define P_MERGE_ME_HPP

#include <iostream>
#include <iomanip>
#include <vector>
#include <deque>
#include <sys/time.h>

struct	t_pair
{
	int	top, bot;
};

void	printErrorArg(char *val);
void	printPair(std::vector<t_pair> vecPair);
void	printSPend(std::vector<int> s, std::vector<int> pend);
bool	strIsDigit(char *s);
std::vector<int> operateVector(int *arr, int size);
std::deque<int>	operateDeque(int *arr, int size);
void	mergeSort(std::vector<t_pair> &vecPair, int start, int end);
void	merge(std::vector<t_pair> &vecPair, int start, int halfPoint, int end);
void	mergeSort(std::deque<t_pair> &vecPair, int start, int end);
void	merge(std::deque<t_pair> &vecPair, int start, int halfPoint, int end);
double	getExecTime(struct timeval & start);
std::vector<t_pair>	createPair(std::vector<int> myVec);
std::deque<t_pair>	createPair(std::deque<int> myVec);

template <typename T>
void	printNum(const T& arr, std::string str)
{
	std::cout << str;
	for (int i = 0; arr[i]; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}
// template <typename T>
// void	checkAscending(T const & nums)
// {
// 	for (typename T::const_iterator it = nums.begin(); it + 1 != nums.end(); it++)
// 	{
// 		if (*it > *(it + 1)) {
// 			std::cout << "error" << std::endl;
// 			return ;
// 		}
// 	}
// 	std::cout << "okay" << std::endl;
// }

#endif
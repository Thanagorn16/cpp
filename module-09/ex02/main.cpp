/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 12:41:30 by prachman          #+#    #+#             */
/*   Updated: 2023/12/09 20:16:09 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename T>
void	printNum(const T& arr, std::string str)
{
	std::cout << str;
	for (int i = 0; arr[i]; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

double	getExecTime(struct timeval & start)
{
	struct timeval	end;
	double			timeTaken;

	gettimeofday(&end, NULL);
	timeTaken = end.tv_sec - start.tv_sec;
	timeTaken += (end.tv_usec - start.tv_usec) * 1e-6;
	return timeTaken;
}

int	main(int ac, char **av)
{
	if (ac <= 2)
		return (std::cout << "Error: there must be at least 2 arguments to sort." << std::endl, 0);
	struct	timeval time;
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

	// execution
	double	vecTime;
	double	deqTime;
	printNum(arr, "Before: ");
	gettimeofday(&time, NULL);
	std::vector<int> vec = operateVector(arr, size);
	vecTime = getExecTime(time);
	gettimeofday(&time, NULL);

	std::deque<int> deq = operateDeque(arr, size);
	deqTime = getExecTime(time);
	printNum(vec, "After: ");
	// printNum(deq, "After: ");

	std::cout << std::fixed << std::setprecision(5);
	std::cout << "Time to process a range of " << size << " elements with std::vector : " << vecTime << " sec" << std::endl;
	std::cout << "Time to process a range of " << size << " elements with std::deque : " << deqTime << " sec" << std::endl;
	delete [] arr;
}

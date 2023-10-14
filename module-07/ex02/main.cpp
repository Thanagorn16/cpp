/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:47:50 by prachman          #+#    #+#             */
/*   Updated: 2023/10/14 09:29:46 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int> obj;
	Array<size_t> obj2(3);
	Array<size_t> obj3(obj2);
	Array<size_t> obj4;

	// check deep copy
	for (size_t i = 0; i < obj3._size; i++)
	{
		obj3._arr[i] += 1;
		std::cout << obj3._arr[i] << std::endl;
	}
	for (size_t i = 0; i < obj2._size; i++)
	{
		std::cout << obj2._arr[i] << std::endl;
	}
	obj4 = obj3;
	for (size_t i = 0; i < obj4._size; i++)
	{
		obj4._arr[i] += 1;
		std::cout << obj4._arr[i] << std::endl;
	}
	for (size_t i = 0; i < obj3._size; i++)
	{
		std::cout << obj3._arr[i] << std::endl;
	}
}
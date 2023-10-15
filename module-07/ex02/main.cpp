/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:47:50 by prachman          #+#    #+#             */
/*   Updated: 2023/10/15 19:22:52 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	try
	{
		Array<int> obj;
		Array<unsigned int> obj2(3);
		Array<unsigned int> obj3(obj2);
		Array<unsigned int> obj4;

		// check deep copy
		std::cout << "obj3" << std::endl;
		for (unsigned int i = 0; i < obj3.size(); i++)
		{
			obj3[i] += 1;
			std::cout << obj3[i] << std::endl;
		}
		std::cout << "obj2" << std::endl;
		for (unsigned int i = 0; i < obj2.size(); i++)
			std::cout << obj2[i] << std::endl;
		obj4 = obj3;
		std::cout << "obj4" << std::endl;
		for (unsigned int i = 0; i < obj4.size(); i++)
		{
			obj4[i] += 1;
			std::cout << obj4[i] << std::endl;
		}
		std::cout << "obj3" << std::endl;
		for (unsigned int i = 0; i < obj3.size(); i++)
			std::cout << obj3[i] << std::endl;
		std::cout << "subsrcipt operator" << std::endl;
		std::cout << obj4[0] << std::endl;
		obj4[0] = 10;
		for (unsigned int i = 0; i < obj4.size(); i++)
			std::cout << obj4[i] << std::endl;
		std::cout << "subsript operator exception" << std::endl;
		std::cout << obj4[0] << std::endl;
		std::cout << obj4[1] << std::endl;
		std::cout << obj4[2] << std::endl;
		std::cout << obj4[-1] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
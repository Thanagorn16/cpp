/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:21:46 by prachman          #+#    #+#             */
/*   Updated: 2023/10/17 15:24:51 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	{
		std::cout << "********** VECTOR **********" << std::endl;
		std::vector<int>	vals;
		int					val2 = 1;
		int					res;
		try
		{
			for (int i = 0; i < 5; i++) vals.push_back(i + 1);
			res = easyfind(vals, val2);
			std::cout << val2 << " found at index " << res << std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
	{
		std::cout << "********** LIST **********" << std::endl;
		std::list<int>	vals;
		int				val2 = 5;
		int				res;
		try
		{
			for (int i = 0; i < 5; i++) vals.push_back(i + 1);
			res = easyfind(vals, val2);
			std::cout << val2 << " found at index " << res << std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
	{
		std::cout << "********** ARRAY **********" << std::endl;
		std::array<int, 5>	vals = {1, 2, 3, 4, 5};
		int					val2 = 3;
		int					res;
		try
		{
			res = easyfind(vals, val2);
			std::cout << val2 << " found at index " << res << std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
}
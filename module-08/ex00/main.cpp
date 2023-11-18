/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:21:46 by prachman          #+#    #+#             */
/*   Updated: 2023/11/18 16:37:30 by truangsi         ###   ########.fr       */
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
		std::cout << "********** DEQUE **********" << std::endl;
		std::deque<int>	vals;
		int				val2 = 3;
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
}
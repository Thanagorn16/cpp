/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:41:20 by prachman          #+#    #+#             */
/*   Updated: 2023/10/19 14:47:43 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	try
	{
		Span	obj(3);
		obj.addNumber(4);
		obj.addNumber(5);
		obj.addNumber(3);
		std::cout << obj.shortestSpan() << std::endl;
		std::cout << obj.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try
	{
		Span	obj;

		obj.addRangeOfNumber(100);
		std::cout << obj.shortestSpan() << std::endl;
		std::cout << obj.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try
	{
		Span	obj(3);
		obj.addNumber(4);
		obj.addNumber(5);
		obj.addNumber(3);
		obj.addNumber(3);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try
	{
		Span	obj(3);
		obj.addNumber(4);
		std::cout << obj.shortestSpan() << std::endl;
		std::cout << obj.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	
}
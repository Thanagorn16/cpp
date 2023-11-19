/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:41:20 by prachman          #+#    #+#             */
/*   Updated: 2023/11/19 16:47:21 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	std::srand(static_cast<unsigned>(std::time(0)));
	try
	{
		Span	obj(3);
		obj.addNumber(4);
		obj.addNumber(5);
		obj.addNumber(3);
		std::cout << "shortest span: " << obj.shortestSpan() << std::endl;
		std::cout << "longest span: " << obj.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	try
	{
		Span	obj(3);
		obj.addNumber(1000);
		obj.addNumber(900);
		obj.addNumber(3);
		std::cout << "shortest span: " << obj.shortestSpan() << std::endl;
		std::cout << "longest span: " << obj.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	try
	{
		Span	obj;

		obj.addRangeOfNumber(100);
		std::cout << "generate: " << obj.getSize() << " numbers" << std::endl;
		std::cout << "shortest span: " << obj.shortestSpan() << std::endl;
		std::cout << "longest span: " << obj.longestSpan() << std::endl;
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
		std::cout << "shortest span: " << obj.shortestSpan() << std::endl;
		std::cout << "longest span: " << obj.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
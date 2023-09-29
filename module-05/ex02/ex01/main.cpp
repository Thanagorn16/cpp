
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:59:05 by prachman          #+#    #+#             */
/*   Updated: 2023/09/28 17:56:13 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	{
		try
		{
			Bureaucrat  obj("Jim", 1);
			Form		form("Contract", 2, 3);

			std::cout << obj << std::endl;
			std::cout << form << std::endl;
			obj.signedForm(form);
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		try
		{
			Bureaucrat  obj("Jim", 1);
			Form		form("Contract", 0, 156);

			std::cout << obj << std::endl;
			std::cout << form << std::endl;
			obj.signedForm(form);
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}
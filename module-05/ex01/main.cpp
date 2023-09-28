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
	try
	{
		Bureaucrat  obj("Jim", 0);
		// Bureaucrat  obj("Jim", 0);
		// Bureaucrat  obj("Jim", 151);

		std::cout << obj << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}
}
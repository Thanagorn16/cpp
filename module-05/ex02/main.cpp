
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
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	{
		try
		{
			std::cout << "First try" << std::endl;
			Bureaucrat bc("A", 1);
			ShrubberyCreationForm	scf("make");
			scf.beSigned(bc);
			scf.execute(bc);
			std::cout << "execute success!" << std::endl;
			std::cout << "------------------" << std::endl;
			RobotomyRequestForm	rrf("cat");
			rrf.beSigned(bc),
			rrf.execute(bc);
			std::cout << "------------------" << std::endl;
			PresidentialPardonForm	ppf("James");
			ppf.beSigned(bc),
			ppf.execute(bc);
			std::cout << "------------------" << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try
		{
			std::cout << "Second try" << std::endl;
			Bureaucrat bc("A", 1);
			ShrubberyCreationForm	scf("make");
			scf.beSigned(bc);
			bc.executeForm(scf);
			std::cout << "------------------" << std::endl;
			RobotomyRequestForm	rrf("cat");
			rrf.beSigned(bc),
			bc.executeForm(rrf);
			std::cout << "------------------" << std::endl;
			PresidentialPardonForm	ppf("James");
			ppf.beSigned(bc),
			bc.executeForm(ppf);
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}
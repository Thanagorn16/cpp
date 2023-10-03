/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:26:57 by prachman          #+#    #+#             */
/*   Updated: 2023/10/03 20:26:24 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// ****************************** Orthodox Canonical Form ****************************** //

Intern::Intern() {};

Intern::Intern (const Intern& obj)
{
	*this = obj;
}

Intern& Intern::operator=(const Intern& obj)
{
    (void) obj;
    return (*this);
}

Intern::~Intern() {};

// ****************************** Member functions ****************************** //
AForm*	Intern::makeForm(std::string formName, std::string formTarget)
{
	const std::string requestName[3] = {"shrubbery request", "robotomy request", "presidential pardon request"};
	
	for(int i = 0; i < 3; i++)
	{
		if (formName == requestName[i])
		{
			switch (i)
			{
				case 0: return (std::cout << "Intern creates " << formName << std::endl, new ShrubberyCreationForm(formTarget));
				case 1: return (std::cout << "Intern creates " << formName << std::endl, new RobotomyRequestForm(formTarget));
				case 2: return (std::cout << "Intern creates " << formName << std::endl, new PresidentialPardonForm(formTarget));
			}
		}
	}
	std::cerr << "The form does not exist" << std::endl;
	return (NULL);
}
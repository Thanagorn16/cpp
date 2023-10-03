/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:00:54 by prachman          #+#    #+#             */
/*   Updated: 2023/10/03 14:12:19 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// ****************************** Orthodox Canonical Form ****************************** //

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	AForm("Pardon", 25, 5), _target(target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) :
	AForm(obj.getName(), obj.getGradeSi(), obj.getGradeEx()) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
	if (this != &obj)
	{
		AForm::operator=(obj);
		_target = obj._target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

// ****************************** Member functions ****************************** //

void	PresidentialPardonForm::execute(const Bureaucrat& bureaucrat) const
{
	if (!this->getIsSigned())
		throw PresidentialPardonForm::FormNotSignedException();
	if (bureaucrat.getGrade() > this->getGradeEx())
		throw Bureaucrat::GradeTooLowException();
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
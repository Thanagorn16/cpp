/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:33:13 by truangsi          #+#    #+#             */
/*   Updated: 2023/10/01 17:35:45 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

// ****************************** Orthodox Canonical Form ****************************** //

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	AForm("Robotomy", 72, 45), _target(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) :
	AForm(obj.getName(), obj.getGradeSi(), obj.getGradeEx()) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
	if (this != &obj)
	{
		AForm::operator=(obj);
		_target = obj._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

// ****************************** Member functions ****************************** //

void	RobotomyRequestForm::execute(const Bureaucrat& bureaucrat) const
{
	if (!this->getIsSigned())
		throw RobotomyRequestForm::FormNotSignedException();
	if (bureaucrat.getGrade() > this->getGradeEx())
		throw Bureaucrat::GradeTooLowException();
}
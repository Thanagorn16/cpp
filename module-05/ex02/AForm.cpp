/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:11:17 by prachman          #+#    #+#             */
/*   Updated: 2023/09/28 21:51:08 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// ****************************** Orthodox Canonical AForm ****************************** //

AForm::AForm(const std::string& name, int gradeSi, int gradeEx) :
	_name(name), _gradeSi(gradeSi), _gradeEx(gradeEx)
{
	if (gradeSi < 1 || gradeEx < 1)
		throw AForm::GradeTooHighException();
	else if (gradeSi > 150 || gradeEx > 150)
		throw AForm::GradeTooLowException();
	_isSigned = false;
}

AForm::AForm(const AForm& obj) :
	_name(obj.getName()), _gradeSi(obj.getGradeSi()), _gradeEx(obj.getGradeEx())
{
	_isSigned = obj.getIsSigned();
}

AForm& AForm::operator=(const AForm& obj)
{
	if (this!= &obj)
		_isSigned = obj.getIsSigned();
	return (*this);
}

AForm::~AForm(){ // Destructor
}

// ****************************** Member Fucntions ****************************** //

void	AForm::beSigned(const Bureaucrat& obj)
{
	if (obj.getGrade() > _gradeSi)
		throw AForm::GradeTooLowException();
	_isSigned = true;
}

void	AForm::execute(const Bureaucrat& bureaucrat) const
{
	if (!this->getIsSigned())
		throw AForm::FormNotSignedException();
	if (bureaucrat.getGrade() > this->getGradeEx())
		throw Bureaucrat::GradeTooLowException();
}

std::string AForm::getName() const
{
	return (_name);
}

int AForm::getGradeSi() const
{
	return (_gradeSi);
}

int AForm::getGradeEx() const
{
	return (_gradeEx);
}

bool AForm::getIsSigned() const
{
	return (_isSigned);
}

// ****************************** others ****************************** //

std::ostream& operator<<(std::ostream& os, const AForm& obj)
{
	os << "Name: " << obj.getName()  << std::endl
	<< "Grade required to sign: " << obj.getGradeSi() << std::endl
	<< "Grade required to execute: " << obj.getGradeEx();
	return (os);
}
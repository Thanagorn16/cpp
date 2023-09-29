/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:11:17 by prachman          #+#    #+#             */
/*   Updated: 2023/09/28 21:51:08 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// ****************************** Orthodox Canonical Form ****************************** //

Form::Form(const std::string& name, int gradeSi, int gradeEx) :
	_name(name), _gradeSi(gradeSi), _gradeEx(gradeEx)
{
	if (gradeSi < 1 || gradeEx < 1)
		throw Form::GradeTooHighException();
	else if (gradeSi > 150 || gradeEx > 150)
		throw Form::GradeTooLowException();
	_isSigned = false;
}

Form::Form(const Form& obj) :
	_name(obj.getName()), _gradeSi(obj.getGradeSi()), _gradeEx(obj.getGradeEx())
{
	_isSigned = obj.getIsSigned();
}

Form& Form::operator=(const Form& obj)
{
	if (this!= &obj)
	{
		// _name = obj.getName();
		// _gradeSi = obj.getGradeSi();
		// _gradeEx = obj.getGradeEx();
		_isSigned = obj.getIsSigned();
	}
	return (*this);
}

Form::~Form(){ // Destructor
}

// ****************************** Member Fucntions ****************************** //

void	Form::beSigned(const Bureaucrat& obj)
{
	if (obj.getGrade() > _gradeSi)
		throw Form::GradeTooLowException();
	_isSigned = true;
}

std::string Form::getName() const
{
	return (_name);
}

int Form::getGradeSi() const
{
	return (_gradeSi);
}

int Form::getGradeEx() const
{
	return (_gradeEx);
}

bool Form::getIsSigned() const
{
	return (_isSigned);
}

// ****************************** others ****************************** //

std::ostream& operator<<(std::ostream& os, const Form& obj)
{
	os << "Name: " << obj.getName()  << std::endl
	<< "Grade required to sign: " << obj.getGradeSi() << std::endl
	<< "Grade required to execute: " << obj.getGradeEx();
	return (os);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:34:09 by truangsi          #+#    #+#             */
/*   Updated: 2023/10/01 17:16:44 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// ****************************** Orthodox Canonical Form ****************************** //

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	AForm("Shrubbery", 145, 137), _target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) :
	AForm(obj.getName(), obj.getGradeSi(), obj.getGradeEx()) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
	if (this != &obj)
	{
		AForm::operator=(obj);
		_target = obj._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

// ****************************** Member functions ****************************** //

void	ShrubberyCreationForm::execute(const Bureaucrat& bureaucrat) const
{
	if (!this->getIsSigned())
		throw ShrubberyCreationForm::FormNotSignedException();
	if (bureaucrat.getGrade() > this->getGradeEx())
		throw Bureaucrat::GradeTooLowException();
	std::ofstream	fd(_target + "_shrubbery");
	if (fd.is_open())
	{
		fd <<
			"                        # #### ####\n"
            "                    ### \\/#|### |/####\n"
            "                   ##\\/#/ \\||/##/_/##/_#\n"
            "                 ###  \\/###|/ \\/ # ###\n"
            "               ##_\\_#\\_\\## | #/###_/_####\n"
            "              ## #### # \\ #| /  #### ##/##\n"
            "               __#_--###`  |{,###---###-~\n"
            "                         \\ }{\n"
            "                          }}{\n"
            "                          }}{\n"
            "                          {{}\n"
            "                    , -=-~{ .-^- _\n"
            "                          `}\n"
            "                           {\n";
		fd.close();
	}
	else std::cout << "Unable to open file" << std::endl;
}
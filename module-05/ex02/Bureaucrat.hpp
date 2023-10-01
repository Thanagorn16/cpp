/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:57:49 by prachman          #+#    #+#             */
/*   Updated: 2023/09/30 16:50:19 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRT_HPP
#define BRT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class	Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat& operator=(const Bureaucrat& obj);
		~Bureaucrat(void);

		void		signedForm(AForm& form);
		std::string	getName() const;
		int			getGrade() const;

		void		executeForm(AForm const & form);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw() {return ("Grade too high");};
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw() {return ("Grade too low");};
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif
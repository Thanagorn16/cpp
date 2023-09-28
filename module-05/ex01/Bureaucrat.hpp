/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:57:49 by prachman          #+#    #+#             */
/*   Updated: 2023/09/28 21:29:32 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRT_HPP
#define BRT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

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

		void		signedForm(const Form& obj);
		std::string	getName() const;
		int			getGrade() const;

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
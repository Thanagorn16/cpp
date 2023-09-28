/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:24:25 by prachman          #+#    #+#             */
/*   Updated: 2023/09/28 21:50:17 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string   _name;
		const int			_gradeSi;
		const int 			_gradeEx;
		bool                _isSigned;
	
	public:
		Form(const std::string& name, int gradeSi, int gradeEx);
		Form(const std::string& name);
		Form(const Form& obj);
		Form& operator=(const Form& obj);
		~Form(void);

		void		beSigned(const Bureaucrat& obj);
		std::string	getName() const;
		int			getGradeSi() const;
		int			getGradeEx() const;
		bool		getIsSigned() const;

		class GradeTooHighException : std::exception
		{
			public:
				virtual const char *what() const throw() {return ("Grade too high");};
		};
		class GradeTooLowException : std::exception
		{
			public:
				virtual const char *what() const throw() {return ("Grade too low");};
		};
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif
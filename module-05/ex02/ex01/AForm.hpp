/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:24:25 by prachman          #+#    #+#             */
/*   Updated: 2023/09/28 21:50:17 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		const int			_gradeSi;
		const int 			_gradeEx;
		bool				_isSigned;

	public:
		AForm(const std::string& name, int gradeSi, int gradeEx);
		AForm(const AForm& obj);
		AForm& operator=(const AForm& obj);
		~AForm(void);

		void		beSigned(const Bureaucrat& bureaucrat);

		std::string	getName() const;
		int			getGradeSi() const;
		int			getGradeEx() const;
		bool		getIsSigned() const;

		virtual void	execute(Bureaucrat& bureaucrat) const = 0;

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

std::ostream& operator<<(std::ostream& os, const AForm& obj);

#endif
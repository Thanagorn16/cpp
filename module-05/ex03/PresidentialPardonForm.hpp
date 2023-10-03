/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:57:05 by prachman          #+#    #+#             */
/*   Updated: 2023/10/03 14:00:23 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PPF_HPP
#define PPF_HPP

#include "AForm.hpp"

class   PresidentialPardonForm : public AForm
{
	private:
		std::string	_target;
	
	public:
		PresidentialPardonForm(std::string _target);
		PresidentialPardonForm(const PresidentialPardonForm& obj);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
		~PresidentialPardonForm();

		void	execute(const Bureaucrat& bureaucrat) const;
		
		// class	RobotomizedException : public std::exception
		// {
		// 	public:
		// 		const char *what() const throw() {return ("Failed to robotomize");}
		// };
};

#endif
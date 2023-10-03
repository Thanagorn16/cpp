/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:37:40 by truangsi          #+#    #+#             */
/*   Updated: 2023/10/03 13:41:56 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RRF_HPP
#define RRF_HPP

#include "AForm.hpp"
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

class RobotomyRequestForm : public AForm
{
	private:
		std::string	_target;

	public:
		RobotomyRequestForm(std::string _target);
		RobotomyRequestForm(const RobotomyRequestForm& obj);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
		~RobotomyRequestForm();

		void	execute(const Bureaucrat& bureaucrat) const;
		
		class	RobotomizedException : public std::exception
		{
			public:
				const char *what() const throw() {return ("Failed to robotomize");}
		};
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:48:24 by prachman          #+#    #+#             */
/*   Updated: 2023/09/07 14:31:00 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << this->_type << " has been created" << std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = obj;
}

Cat&	Cat::operator=(const Cat& obj)
{
	std::cout << "Cat assignmnet operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << this->_type << " destructur called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "*MEOW* *MEOW*" << std::endl;
}
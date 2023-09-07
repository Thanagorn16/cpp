/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:31:11 by prachman          #+#    #+#             */
/*   Updated: 2023/09/07 15:03:48 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << this->_type << " has been created" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = obj;
}

Dog&	Dog::operator=(const Dog& obj)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->_type = obj._type;
		this->_brain = new Brain(*obj._brain);
	}
	return (*this);
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << this->_type << " destructur called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "*BARK* *BARK*" << std::endl;
}
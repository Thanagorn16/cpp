/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:31:11 by prachman          #+#    #+#             */
/*   Updated: 2023/09/07 14:31:09 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << this->_type << " has been created" << std::endl;
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = obj;
}

Dog&	Dog::operator=(const Dog& obj)
{
	std::cout << "Dog assignmnet operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << this->_type << " destructur called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "*BARK* *BARK*" << std::endl;
}
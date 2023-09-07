/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:20:19 by prachman          #+#    #+#             */
/*   Updated: 2023/09/07 14:53:48 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Amimal")
{
	std::cout << _type << " has been created" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "[ Animal ] " << _type << " has been created" << std::endl;
}

Animal::Animal(const Animal& obj)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = obj;
}

Animal&	Animal::operator=(const Animal& obj)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
	return (_type);
}

void    Animal::makeSound() const
{
	std::cout << "Animal makes sound" << std::endl;
}

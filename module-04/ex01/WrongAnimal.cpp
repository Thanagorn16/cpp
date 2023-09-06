/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:34:12 by truangsi          #+#    #+#             */
/*   Updated: 2023/09/06 11:23:16 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Wrong Animal")
{
	std::cout << _type << " has been created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "[ Wrong Animal ] " << _type << " has been created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	std::cout << "Wrong Animal copy constructor called" << std::endl;
	*this = obj;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& obj)
{
	if (this != &obj)
		this->_type = obj.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal deconstructor called" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal makes sound" << std::endl;
}
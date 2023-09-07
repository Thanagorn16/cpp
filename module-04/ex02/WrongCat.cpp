/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:07:15 by truangsi          #+#    #+#             */
/*   Updated: 2023/09/07 14:56:22 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Wrong Cat")
{
	std::cout << _type << " has been created" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = obj;
}

WrongCat&	WrongCat::operator=(const WrongCat& obj)
{
	std::cout << "WrongCat assignmnet operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong cat destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "*WRONG MEOW* *WRONG MEOW*" << std::endl;
}
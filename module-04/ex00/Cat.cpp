/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:48:24 by prachman          #+#    #+#             */
/*   Updated: 2023/09/06 11:44:46 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << this->_type << " has been created" << std::endl;
}

Cat::~Cat()
{
	std::cout << this->_type << " destructur called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "*MEOW* *MEOW*" << std::endl;
}
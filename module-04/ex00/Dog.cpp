/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:31:11 by prachman          #+#    #+#             */
/*   Updated: 2023/09/05 21:55:37 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << this->_type << " has been created" << std::endl;
}

// Dog::Dog()
// {
// 	std::cout << this->_type << " has been created" << std::endl;
// }

Dog::~Dog()
{
	std::cout << this->_type << " destructur called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "*BARK* *BARK*" << std::endl;
}
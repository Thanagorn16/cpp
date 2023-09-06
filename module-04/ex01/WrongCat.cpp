/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:07:15 by truangsi          #+#    #+#             */
/*   Updated: 2023/09/06 11:11:55 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Wrong Cat")
{
	std::cout << _type << " has been created" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong cat destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "*WRONG MEOW* *WRONG MEOW*" << std::endl;
}
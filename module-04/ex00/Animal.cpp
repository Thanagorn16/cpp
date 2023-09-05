/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:20:19 by prachman          #+#    #+#             */
/*   Updated: 2023/09/05 21:58:25 by prachman         ###   ########.fr       */
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

Animal&  Animal::operator=(const Animal& obj)
{
    if (this != &obj)
        this->_type = obj.getType();
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
    std::cout << "[ Animal ] " << _type << " makes sound" << std::endl;
}
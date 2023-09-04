/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:11:44 by prachman          #+#    #+#             */
/*   Updated: 2023/09/04 19:01:18 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attDmg(0)
{
	std::cout << "Created ClapTrap: " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj) :
	_name(obj._name), _hitPoint(obj._hitPoint), _energyPoint(obj._energyPoint), _attDmg(obj._attDmg)
{
	std::cout << "Created a clone of " << obj._name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
	std::cout << "Copy assignment operator" << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hitPoint = obj._hitPoint;
		this->_energyPoint = obj._energyPoint;
		this->_attDmg = obj._attDmg;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
	if (_energyPoint == 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy" << std::endl;
		return ;
	}
	--_energyPoint;
	std::cout << "ClapTrap " << _name << " attacked " << target << std::endl;
	std::cout << "it has caused " << _attDmg << " damage" << std::endl;
	std::cout << "it has " << _energyPoint << " energy left" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoint -= amount;
	std::cout << "ClapTrap " << _name << " took " << amount << " damage" << std::endl;
	if (_hitPoint > 0)
		std::cout << "it has " << _hitPoint << " health left" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " has died" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoint == 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy" << std::endl;
		return ;
	}
	_hitPoint += amount;
	--_energyPoint;
	std::cout << "ClapTrap " << _name << " has been repaired" << std::endl;
	std::cout << "it has " << _hitPoint << " health left" << std::endl;
	std::cout << "it has " << _energyPoint << " energy left" << std::endl;
}
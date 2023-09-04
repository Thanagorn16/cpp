/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:15:35 by truangsi          #+#    #+#             */
/*   Updated: 2023/09/04 18:59:28 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attDmg = 20;
	std::cout << "Created a ScravTrap: " << this->_name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap has been destroyed" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energyPoint == 0)
	{
		std::cout << "ScavTrap " << _name << " has no energy" << std::endl;
		return ;
	}
	--_energyPoint;
	std::cout << "ScavTrap " << _name << " attacked " << target << std::endl;
	std::cout << "it has caused " << _attDmg << " damage" << std::endl;
	std::cout << "it has " << _energyPoint << " energy left" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " <<_name << " is now in Gate keeper mode" << std::endl;
}
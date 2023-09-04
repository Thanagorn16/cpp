/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:50:14 by truangsi          #+#    #+#             */
/*   Updated: 2023/09/04 18:58:24 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attDmg = 30;
	std::cout << "Created a FragTrap: " << this->_name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " <<_name << " has been destroyed" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " <<_name << " is giving a highfive" << std::endl;
}
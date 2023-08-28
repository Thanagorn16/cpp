/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:15:34 by truangsi          #+#    #+#             */
/*   Updated: 2023/08/28 17:49:26 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack()
{
	if (_weapon == NULL)
	{
		std::cout << _name << " does not have any weapon" << std::endl;
		return ;
	}
	std::cout << _name << " attack with their " << _weapon->getType() << std::endl;
}
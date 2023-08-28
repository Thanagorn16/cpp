/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:06:02 by truangsi          #+#    #+#             */
/*   Updated: 2023/08/28 16:34:23 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	Weapon::setType(std::string newType)
{
	_type = newType;
}

const std::string	Weapon::getType()
{
	return _type;
}

Weapon::Weapon(std::string weapon)
{
	_type = weapon;
}
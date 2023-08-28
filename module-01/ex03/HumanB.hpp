/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:15:44 by truangsi          #+#    #+#             */
/*   Updated: 2023/08/28 17:42:12 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_CPP
#define HUMAN_B_CPP

#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	_name;
		Weapon*		_weapon;
	public:
		HumanB(std::string name);

		void	setWeapon(Weapon& weapon);
		void	attack(void);
};

#endif

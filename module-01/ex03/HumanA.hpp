/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:11:22 by truangsi          #+#    #+#             */
/*   Updated: 2023/08/28 17:12:22 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_CPP
#define HUMAN_A_CPP

#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	_name;
		Weapon&		_weapon;
	public:
		HumanA(std::string name, Weapon& weapon);
		void	attack(void);
};

#endif
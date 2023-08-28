/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:58:24 by truangsi          #+#    #+#             */
/*   Updated: 2023/08/28 16:55:01 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class	Weapon
{
	private:
		std::string	_type;

	public:
		Weapon(std::string weapon);

		void				setType(std::string newType);
		const std::string	getType();
};

#endif
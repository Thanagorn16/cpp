/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:03:42 by truangsi          #+#    #+#             */
/*   Updated: 2023/08/28 14:34:12 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	private:
		std::string	_name;

	public:
		Zombie(std::string name);
		~Zombie();

		void	announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
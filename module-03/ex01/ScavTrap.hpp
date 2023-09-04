/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:03:42 by truangsi          #+#    #+#             */
/*   Updated: 2023/09/04 13:13:30 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAV_TRAP_HPP
#define	SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap(std::string name);
		~ScavTrap(void);

		void	attack(const std::string& target);
		void	guardGate(void);
};

#endif
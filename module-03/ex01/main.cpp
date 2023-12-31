/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:11:19 by prachman          #+#    #+#             */
/*   Updated: 2023/09/04 13:38:48 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	scv("First");

	scv.attack("a tree");
	scv.takeDamage(10);
	scv.beRepaired(10);
	scv.guardGate();
	return (0);
}
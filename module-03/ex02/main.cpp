/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:11:19 by prachman          #+#    #+#             */
/*   Updated: 2023/09/04 14:07:51 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap	frt("First");

	frt.attack("a tree");
	frt.takeDamage(10);
	frt.beRepaired(10);
	frt.highFiveGuys();
	return (0);
}
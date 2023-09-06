/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:11:19 by prachman          #+#    #+#             */
/*   Updated: 2023/09/06 15:10:52 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	clap1("Cap");

	clap1.attack("a tree");
	clap1.takeDamage(10);
	clap1.beRepaired(10);

	return (0);
}
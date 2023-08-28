/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:11:12 by truangsi          #+#    #+#             */
/*   Updated: 2023/08/28 14:19:49 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::string	name;

	//create a zombie
	std::cout << "Enter your zombie's name: ";
	std::cin >> name;
	Zombie zom1(name);
	zom1.announce();

	//create with newZombie
	std::cout << "Enter your zombie's name: ";
	std::cin >> name;
	Zombie* zom2 = newZombie(name);
	zom2->announce();
	delete zom2;

	// create with randomChump
	randomChump("ABC");
	return (0);
}
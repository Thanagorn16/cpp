/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:16:20 by truangsi          #+#    #+#             */
/*   Updated: 2023/08/28 15:04:00 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int	n = 10;
	Zombie*	zoms = zombieHorde(n, "zom");
	for (int i = 0; i < n; i++)
		zoms[i].announce();
	delete [] zoms;
	return (0);
}
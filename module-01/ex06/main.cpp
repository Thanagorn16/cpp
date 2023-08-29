/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:35:02 by truangsi          #+#    #+#             */
/*   Updated: 2023/08/29 17:08:24 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char** av)
{
	Harl	harl;

	if (ac != 2)
		return (std::cerr << "Only requires 1 args" << std::endl, 1);
	harl.init();
	harl.getIndex(av[1]);
	switch(harl.index)
	{
		case 0:
			(harl.complain(av[1]));
			break ;
		case 1:
			(harl.complain(av[1]));
			break ;
		case 2:
			(harl.complain(av[1]));
			break ;
		case 3:
			(harl.complain(av[1]));
			break ;
		default:
			std::cout << "The comment does not exist" << std::endl;
	}
	return (0);
}
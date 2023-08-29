/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:35:02 by truangsi          #+#    #+#             */
/*   Updated: 2023/08/29 19:25:39 by truangsi         ###   ########.fr       */
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
			(harl.complain());
			break ;
		case 1:
			(harl.complain());
			break ;
		case 2:
			(harl.complain());
			break ;
		case 3:
			(harl.complain());
			break ;
		default:
			std::cout << "The comment does not exist" << std::endl;
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:13:49 by prachman          #+#    #+#             */
/*   Updated: 2023/11/28 13:45:21 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	std::string arg = static_cast<std::string>(av[1]);

	if (ac != 2)
		return (std::cout << "Error: invalid argument" << std::endl, 0);
	for (size_t i = 0; i < arg.length(); i++)
	{
		
	}
}
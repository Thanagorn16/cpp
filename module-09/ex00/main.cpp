/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 19:55:49 by prachman          #+#    #+#             */
/*   Updated: 2023/11/29 12:15:39 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	int								dataSize = countInputLine(av);
	dataMap							bitMap;
	inputData						inData[dataSize];

	if (ac != 2)
		return (std::cerr << "Error: Invalid arguments" << std::endl, 1);
	storeData(bitMap);
	storeInput(av, inData);
	validateData(bitMap);
	validateInput(inData, dataSize, bitMap);
	// printData(av, inData);
	// printMap(bitMap);
}
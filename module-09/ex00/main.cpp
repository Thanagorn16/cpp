/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 19:55:49 by prachman          #+#    #+#             */
/*   Updated: 2023/11/28 10:06:19 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	processValue(inputData inData, dataMap &bitMap)
{
	dataMap::iterator		key;

	key = bitMap.find(inData.inputDate);
	if (key != bitMap.end()) // if the key is found
	{
		std::cout << inData.inputDate << " >> " << inData.inputValue 
			<< " = " << inData.inputValue * key->second << std::endl;
	}
	else
	{
		dataMap::iterator		it = bitMap.begin();
		std::string				tmp;
		dataMap::key_compare	dateComp = bitMap.key_comp();
		while (dateComp((*it).first, inData.inputDate)) //iterate until the key is more than the inputGkk
		{
			tmp = (*it).first;
			it++;
		}
		key = bitMap.find(tmp); //to make sure that the key exists in the data
		if (key != bitMap.end())
		{
			std::cout << inData.inputDate << " >> " << inData.inputValue 
				<< " = " << inData.inputValue * key->second << std::endl;
		}
	}
}

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
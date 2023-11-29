/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:15:03 by prachman          #+#    #+#             */
/*   Updated: 2023/11/29 12:15:23 by prachman         ###   ########.fr       */
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
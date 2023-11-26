/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 09:13:55 by prachman          #+#    #+#             */
/*   Updated: 2023/11/26 12:12:33 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	countInputLine(char **av)
{
	int				line = 0;
	std::string		tmp;
	std::ifstream	fs;

	fs.open(av[1]);
	while (getline(fs, tmp))
	{
		if (tmp.empty())
			continue ;
		line++;
	}
	fs.close();
	return (line);
}

void    printMap(dataMap bitMap)
{
	for (std::map<std::string, float>::iterator it=bitMap.begin(); it!=bitMap.end(); ++it)
		std::cout << it->first << " >> " << it->second <<std::endl;
}

void    printInput(char **av, inputData *inData)
{
	for (int i = 1; i < countInputLine(av); i++)
	{
		std::cout << "row: " << inData[i].inputDate << std::endl;
		std::cout << "val: " << inData[i].inputValue << std::endl;
		std::cout << "bool: " << inData[i].isValue << std::endl;
	}
}

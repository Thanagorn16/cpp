/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 19:55:49 by prachman          #+#    #+#             */
/*   Updated: 2023/11/26 13:21:21 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	storeData(dataMap &bitMap)
{
	std::ifstream					fs;
	std::string						row, value;

	fs.open("data.csv");
	if (!fs.is_open())
		return (std::cerr << "Error: Cannot open data file" << std::endl, 0);
	std::string	line;
	std::string	tmp;
	while (getline(fs, line))
	{
		if (line.empty())
			continue;
		std::istringstream ss(line);
		getline(ss, row, ',');
		getline(ss, value);
		std::stringstream	converter;
		float	fvalue;
		converter << value;
		converter >> fvalue;
		bitMap[row] = fvalue;
	}
	fs.close();
	return (1);
}

int	storeInputData(char **av, inputData *inData)
{
	std::ifstream					fs;
	std::string						row, value;

	fs.open(av[1]);
	if (!fs.is_open())
		return (std::cerr << "Error: Cannot open the file" << std::endl, 0);
	std::string	line;
	std::string	tmp;
	int	i = 0;
	while (getline(fs, line))
	{
		if (line.empty())
			continue;
		std::istringstream ss(line);
		getline(ss, row, '|');
		inData[i].inputDate = row;
		inData[i].isValue = true;
		if (!getline(ss, value))
			inData[i].isValue = false;
		std::stringstream	converter;
		float	fvalue;
		converter << value;
		converter >> fvalue;
		inData[i].inputValue = fvalue;
		i++;
	}
	fs.close();
	return (1);
}

void	validateInput(inputData *inData, int dataSize)
{
	for (int i = 1; i < dataSize; i++)
	{
		int	dateDigit = 0;
		int	dateHyphen = 0;
		for (size_t j = 0; j < inData[i].inputDate.length(); j++)	
		{
			if (isdigit(inData[i].inputDate[j]))
				dateDigit++;
			if (inData[i].inputDate[j] == '-')
				dateHyphen++;
		}
		if (dateDigit != 8 || dateHyphen != 2 || !inData[i].isValue)
		{
			std::cerr << "Error: bad input => " << inData[i].inputDate << std::endl;
			continue ;
		}
		if (inData[i].inputValue > 1000) {std::cout << "Error: number is too large." << std::endl; continue;}
		else if (inData[i].inputValue < 0) {std::cout << "Error: number is too small." << std::endl; continue;}
		// std::cout << inData[i].inputDate << std::endl;
		// std::cout << inData[i].inputValue << std::endl;
	}
}

int	main(int ac, char **av)
{
	int								dataSize = countInputLine(av);
	std::ifstream					fs;
	dataMap							bitMap;
	std::string						row, value;
	inputData						inData[dataSize];

	if (ac != 2)
		return (std::cerr << "Error: Invalid arguments" << std::endl, 1);
	storeData(bitMap);
	storeInputData(av, inData);
	validateInput(inData, dataSize);
	// printData(av, inData);
	// printMap(bitMap);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manageInput.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:26:30 by prachman          #+#    #+#             */
/*   Updated: 2023/11/28 10:18:54 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	storeInput(char **av, inputData *inData)
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

void	validateInput(inputData *inData, int dataSize, dataMap bitMap)
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
		else if (inData[i].inputValue < 0) {std::cout << "Error: not a positive number." << std::endl; continue;}
        inData[i].inputDate.erase(inData[i].inputDate.end()-1); //erase space in the 'inputDate' string
        std::string   firstKey = bitMap.begin()->first;
        std::string   lastKey = bitMap.rbegin()->first;
        if (inData[i].inputDate < firstKey)
        {
            std::cout << "Error: the input's date preceed the existing date" << std::endl;
            continue;
        }
        else if (inData[i].inputDate > lastKey)
        {
            std::cout << "Error: the input's date exceed the existing date" << std::endl;
            continue;
        }
        processValue(inData[i], bitMap);
	}
}
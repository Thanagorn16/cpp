/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manageData.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:23:53 by prachman          #+#    #+#             */
/*   Updated: 2023/11/27 15:01:00 by prachman         ###   ########.fr       */
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
		if (!getline(ss, value)) // if value cannot be retrieved (by fault delimeter of other reasons), skip
			continue;
		std::stringstream	converter;
		float	fvalue;
		converter << value;
		converter >> fvalue;
		bitMap[row] = fvalue;
	}
	fs.close();
	return (1);
}

void	validateData(dataMap &bitMap)
{
	for (std::map<std::string, float>::iterator it=bitMap.begin(); it!=bitMap.end();)
	{
		int	dateDigit = 0;
		int	dateHyphen = 0;
		for (size_t i = 0; i < it->first.length(); i++)
		{
			if (isdigit(it->first[i]))
				dateDigit++;
			if (it->first[i] == '-')
				dateHyphen++;
		}
		if (dateDigit != 8 || dateHyphen != 2)
			it = bitMap.erase(it); //update it with the next element
		else
			it++; //update it this way so that it won't skip any key after erasing
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 19:55:49 by prachman          #+#    #+#             */
/*   Updated: 2023/11/25 15:26:43 by prachman         ###   ########.fr       */
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
	// std::cout << line << std::endl;
	return (line);
}

int	main(int ac, char **av)
{
	int								inputLine = countInputLine(av);
	std::ifstream					fs;
	std::map<std::string, float>	bitMap;
	std::string						row, value;
	InputData						inData[inputLine];

	if (ac != 2)
		return (std::cerr << "Error: Invalid arguments" << std::endl, 1);
	fs.open(av[1]);
	if (!fs.is_open())
		return (std::cerr << "Error: Cannot open the file" << std::endl, 1);
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
	for (int i = 1; i < countInputLine(av); i++)
	{
		std::cout << "row: " << inData[i].inputDate << std::endl;
		std::cout << "val: " << inData[i].inputValue << std::endl;
		std::cout << "bool: " << inData[i].isValue << std::endl;
	}
}
// int	main()
// {
// 	std::map<std::string, int> key;

// 	key["a"]=10;
// 	key["c"]=30;
// 	key["b"]=20;
// 	key["d"]=40;

// 	for (std::map<std::string, int>::iterator it=key.begin(); it!=key.end(); ++it)
// 		std::cout << it->first << " >> " << it->second <<std::endl;
// 	std::cout << "reverse" << std::endl;
// 	for (std::map<std::string, int>::reverse_iterator rit=key.rbegin(); rit!=key.rend(); ++rit)
// 		std::cout << rit->first << " >> " << rit->second <<std::endl;
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:21:39 by truangsi          #+#    #+#             */
/*   Updated: 2023/11/27 09:27:07 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTC_EX_HPP
#define BTC_EX_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <iterator>
#include <algorithm>
#include <map>

typedef std::map<std::string, float>	dataMap;

struct  inputData
{
	std::string inputDate;
	float       inputValue;
	bool        isValue;
};

void	printMap(dataMap bitMap);
void	printInput(char **av, inputData *inData);
void	validateData(dataMap &bitMap);
void	validateInput(inputData *inData, int dataSize);
int		storeData(dataMap &bitMap);
int		storeInput(char **av, inputData *inData);
int 	countInputLine(char **av);



#endif
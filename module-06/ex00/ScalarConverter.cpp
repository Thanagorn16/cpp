/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:59:32 by prachman          #+#    #+#             */
/*   Updated: 2023/10/08 15:17:09 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// ****************************** Orthodox Canonical Form ****************************** //

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& obj)
{
	*this = obj;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj)
{
	(void) obj;
	return (*this);
}

ScalarConverter::~ScalarConverter() {}

// ****************************** Member functions ****************************** //

bool	checkInput(std::string input, ScalarConverter& sc)
{
	size_t				fPos;
	bool				dotPos = false;
	std::stringstream	ss;

	if (input.find(".") != std::string::npos) // if '.' exists
	{
		if (input.find_first_of(".") != input.find_last_of(".")) // if there are more than one "."
		{
			std::cerr << "Impossible" << std::endl;
			return (false);
		}
		dotPos = true;
	}
	fPos = input.find("f");
	if (dotPos && fPos != std::string::npos) // if 'f' is founded
	{
		if (input[fPos + 1] != '\0') // make sure that 'f' is at the end of string
		{
			std::cerr << "Impossible" << std::endl;
			return (false);
		}
		input.erase(fPos, 1);
	}
	ss << input;
	ss >> sc.myFloat;
	if (ss.fail())
	{
		std::cerr << "Impossible" << std::endl;
		return (false);
	}
	return (true);
}

void	convertToChar(std::string input, ScalarConverter& sc)
{
	// protect char
	char	myChar;

	if (!checkInput(input, sc))
		return ;
	if (sc.myFloat < 32 || sc.myFloat > 126)
	{
		std::cerr << "Non displayable" << std::endl;
		return ;
	}
	myChar = static_cast<char>(sc.myFloat);	
	std::cout << "char: '" << myChar << "'" << std::endl;
	std::cout << "---------------" << std::endl;
}

// void	convertToInt(std::string input)
// {

// }

void ScalarConverter::convert(const char *input)
{
	ScalarConverter	sc;

	convertToChar((std::string)input, sc);
}
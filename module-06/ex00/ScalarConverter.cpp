/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:59:32 by prachman          #+#    #+#             */
/*   Updated: 2023/10/09 15:40:36 by prachman         ###   ########.fr       */
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
	ss >> sc.myDouble;
	if (ss.fail())
	{
		std::cerr << "Impossible" << std::endl;
		return (false);
	}
	return (true);
}

void	convertToChar(std::string input, ScalarConverter& sc)
{
	char	myChar;

	if (!checkInput(input, sc))
		return ;
	if (sc.myDouble < 32 || sc.myDouble > 126)
	{
		std::cerr << "Non displayable" << std::endl;
		return ;
	}
	myChar = static_cast<char>(sc.myDouble);	
	std::cout << "char: '" << myChar << "'" << std::endl;
}

void	convertToInt(std::string input, ScalarConverter& sc)
{
	int	myInt;

	if (!checkInput(input, sc))
		return ;
	if (sc.myDouble < std::numeric_limits<int>::min() || sc.myDouble > std::numeric_limits<int>::max())	
	{
		std::cerr << "Impossible" << std::endl;
		return ;
	}
	myInt = static_cast<int>(sc.myDouble);
	std::cout << "int: " << myInt << std::endl;
}

void	convertToFloat(std::string input, ScalarConverter& sc)
{
	float	myFloat;	

	if (!checkInput(input, sc))
		return ;
	if (sc.myDouble < std::numeric_limits<float>::lowest() || sc.myDouble > std::numeric_limits<float>::max())
	{
		std::cerr << "Impossible" << std::endl;
		return ;
	}
	myFloat = static_cast<float>(sc.myDouble);
	if (std::floor(myFloat) == myFloat)
		std::cout << "float: " << myFloat << ".0f" << std::endl;
	else
		std::cout << "float: " << myFloat << "f" << std::endl;
}

void ScalarConverter::convert(const char *input)
{
	ScalarConverter	sc;

	convertToChar((std::string)input, sc);
	convertToInt((std::string)input, sc);
	convertToFloat((std::string)input, sc);
	std::cout << "--------------------" << std::endl;
}
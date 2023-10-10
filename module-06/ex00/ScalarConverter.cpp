/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:59:32 by prachman          #+#    #+#             */
/*   Updated: 2023/10/10 18:30:57 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	handleSpecialValue(std::string input)
{
	bool		isBool = false;
	std::string	arr[] = {"inf", "+inf", "inff", "+inff", "-inf", "-inff", "nan", "nanf"};

	for (int i = 0; i < 8; i++)
	{
		if (input == arr[i])
		{
			std::cerr << "char: Impossible" << std::endl;
			std::cerr << "int: Impossible" << std::endl;
			break ;
		}
	}

	if (input == "inf" || input == "+inf" || input == "inff" || input == "+inff")
	{
		std::cout << "float: " << std::numeric_limits<float>::infinity() << "f" << std::endl;
		std::cout << "double: " << std::numeric_limits<double>::infinity() << std::endl;
		isBool = true;
	}
	else if (input == "-inf" || input == "-inff")
	{
		std::cout << "float: " << -std::numeric_limits<float>::infinity() << "f" << std::endl;
		std::cout << "double: " << -std::numeric_limits<double>::infinity() << std::endl;
		isBool = true;
	}
	else if (input == "nan" || input == "nanf")
	{
		std::cout << "float: " <<std::numeric_limits<float>::quiet_NaN() << "f" << std::endl;
		std::cout << "double: " <<std::numeric_limits<double>::quiet_NaN() << std::endl;
		isBool = true;
	}
	return (isBool);
}

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
		std::cerr << "char: Non displayable" << std::endl;
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
		std::cerr << "int: impossible" << std::endl;
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
		std::cerr << "float: impossible" << std::endl;
		return ;
	}
	myFloat = static_cast<float>(sc.myDouble);
	if (std::floor(myFloat) == myFloat) // check if it's a whole number
		std::cout << "float: " << myFloat << ".0f" << std::endl;
	else
		std::cout << "float: " << myFloat << "f" << std::endl;
}

void	convertToDouble(std::string input, ScalarConverter& sc)
{
	if (!checkInput(input, sc))
		return ;
	if (sc.myDouble < std::numeric_limits<double>::lowest() || sc.myDouble > std::numeric_limits<double>::max())
	{
		std::cerr << "double: impossible" << std::endl;
		return ;
	}
	if (std::floor(sc.myDouble) == sc.myDouble) // check if it's a whole number
		std::cout << "double: " << sc.myDouble << ".0" << std::endl;
	else
		std::cout << "double: " << sc.myDouble << std::endl;
}

void ScalarConverter::convert(const char *input)
{
	ScalarConverter	sc;

	if (handleSpecialValue((std::string)input))
		return ;
	convertToChar((std::string)input, sc);
	convertToInt((std::string)input, sc);
	convertToFloat((std::string)input, sc);
	convertToDouble((std::string)input, sc);
}
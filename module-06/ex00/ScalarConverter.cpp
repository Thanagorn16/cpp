/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:59:32 by prachman          #+#    #+#             */
/*   Updated: 2023/10/08 14:07:07 by prachman         ###   ########.fr       */
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

// float	checkInput(std::string input)
// {

// }

void	convertToChar(std::string input)
{
	size_t				fPos;
	bool				dotPos = false;
	float				myFloat;
	char				myChar;
	std::stringstream	ss;

	if (input.find(".") != std::string::npos) // if '.' exists
	{
		if (input.find_first_of(".") != input.find_last_of(".")) // if there are more than one "."
		{
			std::cerr << "Impossible" << std::endl;
			return ;
		}
		dotPos = true;
	}
	fPos = input.find("f");
	if (dotPos && fPos != std::string::npos) // if 'f' is founded
	{
		if (input[fPos + 1] != '\0') // make sure that 'f' is at the end of string
		{
			std::cerr << "Impossible" << std::endl;
			return ;
		}
		input.erase(fPos, 1);
	}
	ss << input;
	ss >> myFloat;
	if (ss.fail())
	{
		std::cerr << "Impossible" << std::endl;
		return ;
	}
	// protect char
	if (myFloat < 32 || myFloat > 126)
	{
		std::cerr << "Non displayable" << std::endl;
		return ;
	}
	myChar = static_cast<char>(myFloat);	
	std::cout << "char: '" << myChar << "'" << std::endl;
	std::cout << "---------------" << std::endl;
}

void	convertToInt(std::string input)
{

}

void ScalarConverter::convert(const char *input)
{
	// std::cout << "111111111" <<std::endl;
	convertToChar((std::string)input);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:05:31 by truangsi          #+#    #+#             */
/*   Updated: 2023/08/25 16:21:55 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::_getInput(std::string str) const
{
	std::string input;

	input = "";
	while (1)
	{
		std::cout << str;
		getline(std::cin, input);
		if (input.empty())
		{
			std::cout << "A contact can't have empty fields" << std::endl;
			continue;
		}
		else
			break ;
	}
	return (input);
}

void	Contact::init()
{
	_firstName = _getInput("Enter your first name: ");
	_lastName = _getInput("Enter your last name: ");
	_nickname = _getInput("Enter your nickname: ");
	_phoneNum = _getInput("Enter your phone number: ");
	_darkSecret = _getInput("Enter your darkest secret: ");
	std::cout << "DONE!" << std::endl;
}

std::string	checkLongInput(std::string str)
{
	if (str.length() <= 10)
		return (str);
	return (str.substr(0, 9) + ".");
}

bool	Contact::printContact(int index)
{
	//if the contact does not exist
	if (_firstName.empty())
		return (false);
	// if the contact exists
	std::cout << '|' << std::setw(10) << index << '|'
		<< std::setw(10) << checkLongInput(_firstName) << '|'
		<< std::setw(10) << checkLongInput(_lastName) << '|'
		<< std::setw(10) << checkLongInput(_nickname) << '|' << std::endl;
	return (true);
}

void	Contact::showSelectedContact()
{
	std::cout << "First Name: " << _firstName << std::endl;
	std::cout << "Last Name: " << _lastName << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone Number: " << _phoneNum << std::endl;
	std::cout << "Dark Secret: " << _darkSecret << std::endl;
}



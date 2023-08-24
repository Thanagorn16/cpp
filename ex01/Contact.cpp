/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:05:31 by truangsi          #+#    #+#             */
/*   Updated: 2023/08/24 11:26:02 by truangsi         ###   ########.fr       */
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
	_darkSecret = _getInput("Enter your darkest secrete: ");
	std::cout << "finised init\n";
}

void	Contact::setIndex(int index)
{
	_index = index;
}

bool	Contact::printContact(int index)
{
	//if the contact does not exist
	if (_firstName.empty())
		return (false);
	// if the contact exists
	std::cout << '|' << std::setw(10) << index << '|'
		<< std::setw(10) << _firstName << '|'
		<< std::setw(10) << _lastName << '|'
		<< std::setw(10) << _nickname << '|' << std::endl;
	return (true);
}



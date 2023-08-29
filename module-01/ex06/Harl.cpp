/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:07:32 by truangsi          #+#    #+#             */
/*   Updated: 2023/08/29 19:25:46 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug()
{
	std::cout << "DEBUG" << std::endl;
	std::cout << "I love having extra bacon for" << std::endl;
	std::cout << "my 7XL-double-cheese-triple-pickle-specialketchup burger" << std::endl;
	std::cout << "I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "INFO" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "WARNING" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years" << std::endl;
	std::cout << "whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "ERROR" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::init()
{
	_comments[0] = "DEBUG";
	_comments[1] = "INFO";
	_comments[2] = "WARNING";
	_comments[3] = "ERROR";
	funcPtr[0] = &Harl::debug;
	funcPtr[1] = &Harl::info;
	funcPtr[2] = &Harl::warning;
	funcPtr[3] = &Harl::error;
}

void	Harl::getIndex(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (_comments[i].compare(level) == 0)
		{
			index = i;
			return ;
		}
	}
	index = -1;
}

void	Harl::complain()
{
	(this->*funcPtr[index])();
}

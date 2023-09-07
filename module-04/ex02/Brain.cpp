/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:20:50 by truangsi          #+#    #+#             */
/*   Updated: 2023/09/06 13:36:44 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain& obj)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = obj;
}

Brain&	Brain::operator=(const Brain& obj)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = obj._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}
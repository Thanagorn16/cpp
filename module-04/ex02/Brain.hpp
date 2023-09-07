/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:07:29 by truangsi          #+#    #+#             */
/*   Updated: 2023/09/06 12:14:09 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class	Brain
{
	private:
		std::string	_ideas[100];
	public:
		Brain(void);
		Brain(const Brain& obj);
		Brain&	operator=(const Brain& obj);
		~Brain(void);
};

#endif
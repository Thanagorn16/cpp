/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:06:20 by truangsi          #+#    #+#             */
/*   Updated: 2023/09/06 12:20:33 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class	Animal
{
	protected:
		std::string _type;

	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal& obj);
		Animal& operator=(const Animal& obj);
		virtual	~Animal(void);

		std::string		getType() const;
		virtual void	makeSound(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:06:20 by truangsi          #+#    #+#             */
/*   Updated: 2023/09/07 15:27:15 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef W_ANIMAL_HPP
#define W_ANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
	protected:
		std::string _type;

	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal& obj);
		WrongAnimal& operator=(const WrongAnimal& obj);
		~WrongAnimal(void);

		std::string		getType(void) const;
		void	makeSound(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:03:22 by truangsi          #+#    #+#             */
/*   Updated: 2023/09/07 14:53:19 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef W_CAT_HPP
#define W_CAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat& obj);
		WrongCat& operator=(const WrongCat& obj);
		~WrongCat(void);

		void	makeSound(void) const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:25:03 by prachman          #+#    #+#             */
/*   Updated: 2023/10/11 14:23:53 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <cstddef>
#include "Data.hpp"

class	Serializer
{
	public: 
		Serializer(void);
		Serializer(const Serializer& obj);
		Serializer& operator=(const Serializer& obj);
		~Serializer(void);
		
		static uintptr_t	serialize(Data *ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif
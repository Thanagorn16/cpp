/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:04:33 by prachman          #+#    #+#             */
/*   Updated: 2023/10/11 14:09:53 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// ****************************** Orthodox Canonical Form ****************************** //

Serializer::Serializer() {}

Serializer::Serializer(const Serializer& obj)
{
	*this = obj;
}

Serializer& Serializer::operator=(const Serializer& obj)
{
	(void) obj;
	return (*this);
}

Serializer::~Serializer() {}

// ****************************** Member Fucntions ****************************** //

uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}


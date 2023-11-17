/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OrthodoxCanonicalForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 21:16:07 by prachman          #+#    #+#             */
/*   Updated: 2023/11/16 13:45:23 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// ****************************** Orthodox Canonical Form ****************************** //

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& obj) : myDouble(obj.myDouble) {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj)
{
	if (this != &obj)
		myDouble = obj.myDouble;
	return (*this);
}

ScalarConverter::~ScalarConverter() {}

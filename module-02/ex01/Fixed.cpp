/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:53:11 by truangsi          #+#    #+#             */
/*   Updated: 2023/09/28 17:28:33 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fixedValue = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedValue = value << _fracBit;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedValue = static_cast<int>(std::round(value * (1 << _fracBit)));
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	// this->setRawBits(other.getRawBits());
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->setRawBits(other.getRawBits());
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destrcutor called" << std::endl;
}

int	Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (_fixedValue);
}

void	Fixed::setRawBits(int const raw)
{
	_fixedValue = raw;
}

int	Fixed::toInt() const
{
	int	intValue;

	intValue = _fixedValue >> _fracBit;
	return (intValue);
}

float	Fixed::toFloat() const
{
	float	floatValue;

	floatValue = static_cast<float>(_fixedValue) / (1 << _fracBit);
	return (floatValue);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}
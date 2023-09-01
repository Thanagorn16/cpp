/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:53:11 by truangsi          #+#    #+#             */
/*   Updated: 2023/09/01 22:55:09 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//! The Orthodox Canonical Class Form
Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	_fixedValue = 0;
}

Fixed::Fixed(const Fixed& other)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
	// this->setRawBits(other.getRawBits());
}

Fixed& Fixed::operator=(const Fixed& other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->setRawBits(other.getRawBits());
	return (*this);
}

Fixed::~Fixed()
{
	// std::cout << "Destrcutor called" << std::endl;
}

//! int & float constructor
Fixed::Fixed(const int value)
{
	// std::cout << "Int constructor called" << std::endl;
	_fixedValue = value << _fracBit;
}

Fixed::Fixed(const float value)
{
	// std::cout << "Float constructor called" << std::endl;
	_fixedValue = static_cast<int>(std::round(value * (1 << _fracBit)));
}


//! get & set
int	Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (_fixedValue);
}

void	Fixed::setRawBits(int const raw)
{
	_fixedValue = raw;
}

//! conversion
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

//! comparison operators
bool Fixed::operator>(const Fixed& obj) const
{
	return (this->getRawBits() > obj.getRawBits());
}

bool Fixed::operator<(const Fixed& obj) const
{
	return (this->getRawBits() < obj.getRawBits());
}

bool Fixed::operator>=(const Fixed& obj) const
{
	return (this->getRawBits() >= obj.getRawBits());
}

bool Fixed::operator<=(const Fixed& obj) const
{
	return (this->getRawBits() <= obj.getRawBits());
}

bool Fixed::operator==(const Fixed& obj) const
{
	return (this->getRawBits() == obj.getRawBits());
}

bool Fixed::operator!=(const Fixed& obj) const
{
	return (this->getRawBits() != obj.getRawBits());
}

//! arithmetic operator
Fixed	Fixed::operator+(const Fixed& obj)
{
	return (this->toFloat() + obj.toFloat());
}

Fixed	Fixed::operator-(const Fixed& obj)
{
	return (this->toFloat() - obj.toFloat());
}

Fixed	Fixed::operator*(const Fixed& obj)
{
	return (this->toFloat() * obj.toFloat());
}

Fixed	Fixed::operator/(const Fixed& obj)
{
	return (this->toFloat() / obj.toFloat());
}

//! increment & decrement
Fixed& Fixed::operator++()
{
	++this->_fixedValue;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	_fixedValue++;
	return (tmp);
}

Fixed& Fixed::operator--()
{
	--this->_fixedValue;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	_fixedValue--;
	return (tmp);
}

// ! overloaded member function
Fixed& Fixed::min(Fixed& num1, Fixed& num2)
{
	if (num1.getRawBits() < num2.getRawBits())
		return (num1);
	return (num2);
}

const Fixed& min(const Fixed& num1, const Fixed& num2)
{
	if (num1.getRawBits() < num2.getRawBits())
		return (num1);
	return (num2);
}

Fixed& Fixed::max(Fixed& num1, Fixed& num2)
{
	if (num1.getRawBits() > num2.getRawBits())
		return (num1);
	return (num2);
}

const Fixed& Fixed::max(const Fixed& num1, const Fixed& num2)
{
	if (num1.getRawBits() > num2.getRawBits())
		return (num1);
	return (num2);
}

//! insertion operator
std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}
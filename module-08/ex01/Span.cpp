/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:20:23 by prachman          #+#    #+#             */
/*   Updated: 2023/11/19 16:46:11 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// ****************************** Orthodox Canonical Form ****************************** //

Span::Span() {}

Span::Span(unsigned int size) : _size(size) {}

Span::Span(const Span& obj) : _size(obj._size)
{
	_arr = obj._arr;
}

Span& Span::operator=(const Span& obj)
{
	if (this != &obj)
	{
		_size = obj._size;
		_arr = obj._arr;
	}
	return *this;
}

Span::~Span() {}

// ****************************** Member functions ****************************** //

void    Span::addNumber(int num)
{
	if (_arr.size() > _size - 1)
		throw MaxmimunSizeException();
	else
		_arr.push_back(num);
}


void	Span::addRangeOfNumber(unsigned int amt)
{
	_size = amt;
	std::vector<unsigned int>	tmp(amt);
	std::generate(tmp.begin(), tmp.end(), randomNumber);
	for (std::vector<unsigned int>::iterator it = tmp.begin(); it != tmp.end(); ++it)
		addNumber(*it);
}

unsigned int Span::shortestSpan()
{
	unsigned int						dist;
	std::vector<unsigned int>			tmp;
	std::vector<unsigned int>::iterator	min;

	if (_arr.size() == 1)
		throw InvalidSpanException();
	std::sort(_arr.begin(), _arr.end(), std::greater<unsigned int>());
	for (std::vector<unsigned int>::iterator it = _arr.begin(); it != _arr.end(); it++)
	{
		for (std::vector<unsigned int>::iterator ip = std::next(it); ip != _arr.end(); ip++)
		{
			dist = *it - *ip;
			tmp.push_back(dist);
		}
	}
	min = std::min_element(tmp.begin(), tmp.end());
	if (min == tmp.end())
		throw InvalidSpanException();
	return *min;
}

unsigned int Span::longestSpan()
{
	unsigned int						dist;
	std::vector<unsigned int>			tmp;
	std::vector<unsigned int>::iterator	max;

	if (_arr.size() == 1)
		throw InvalidSpanException();
	std::sort(_arr.begin(), _arr.end(), std::greater<unsigned int>());
	for (std::vector<unsigned int>::iterator it = _arr.begin(); it != _arr.end(); it++)
	{
		for (std::vector<unsigned int>::iterator ip = std::next(it); ip != _arr.end(); ip++)
		{
			dist = *it - *ip;
			tmp.push_back(dist);
		}
	}
	max = std::max_element(tmp.begin(), tmp.end());
	if (max == tmp.end())
		throw InvalidSpanException();
	return *max;
}

unsigned int	Span::getSize() {return _size;}

void    Span::printElement()
{
	for (std::vector<unsigned int>::iterator it = _arr.begin(); it != _arr.end(); ++it)
		std::cout << *it << std::endl;
}

// ****************************** Others ****************************** //

unsigned int randomNumber() {
	int randNum = std::rand();
	if (randNum < 0)
		randNum = -randNum;
	return static_cast<unsigned>(randNum);
}

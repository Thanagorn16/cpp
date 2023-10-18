/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:20:23 by prachman          #+#    #+#             */
/*   Updated: 2023/10/18 20:01:06 by prachman         ###   ########.fr       */
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


void	Span::addRangeOfNumber(int amt)
{
	_size = amt;
	std::srand(static_cast<unsigned>(std::time(0)));
	std::vector<int>	tmp(amt);
	std::generate(tmp.begin(), tmp.end(), randomNumber);
	for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end(); ++it)
		addNumber(*it);
}

unsigned int Span::shortestSpan()
{
	int							dist;
	std::vector<int>			tmp;
	std::vector<int>::iterator	min;

	if (_arr.size() == 1)
		throw InvalidSpanException();
	for (std::vector<int>::iterator it = _arr.begin(); it != _arr.end(); it++)
	{
		for (std::vector<int>::iterator ip = std::next(it); ip != _arr.end(); ip++)
		{
			dist = *it - *ip;
			if (dist < 0)
				dist *= -1;
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
	int							dist;
	std::vector<int>			tmp;
	std::vector<int>::iterator	max;

	if (_arr.size() == 1)
		throw InvalidSpanException();
	for (std::vector<int>::iterator it = _arr.begin(); it != _arr.end(); it++)
	{
		for (std::vector<int>::iterator ip = std::next(it); ip != _arr.end(); ip++)
		{
			dist = *it - *ip;
			if (dist < 0)
				dist *= -1;
			tmp.push_back(dist);
		}
	}
	max = std::max_element(tmp.begin(), tmp.end());
	if (max == tmp.end())
		throw InvalidSpanException();
	return *max;

}

void    Span::printElement()
{
	for (std::vector<int>::iterator it = _arr.begin(); it != _arr.end(); ++it)
		std::cout << *it << std::endl;
}

// ****************************** Others ****************************** //

int	randomNumber() {return static_cast<int>(std::rand() * 2);}
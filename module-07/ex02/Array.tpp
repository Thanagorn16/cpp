/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:48:11 by prachman          #+#    #+#             */
/*   Updated: 2023/10/15 17:40:41 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Array.hpp"

// ****************************** Orthodox Canonical Form ****************************** //

template <typename T>
Array<T>::Array() : _arr(nullptr), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(const Array& obj) : _size(obj._size)
{
	_arr = new T[_size];
	for (size_t i = 0; i < _size; ++i)
		_arr[i] = obj._arr[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& obj)
{
	std::cout << "in the copy assigment operator" << std::endl;
	if (this != &obj)
	{
		_size = obj.size();
		_arr = new T[_size];
		for (size_t i = 0; i < _size; ++i)
			_arr[i] = obj._arr[i];
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= this->size() || static_cast<int>(index) < 0)
		throw std::out_of_range("Index out of bounds");
	return _arr[index];
}

template <typename T>
Array<T>::~Array()
{
	// std::cout << "Deconstructor called" << std::endl;
	delete[] _arr;
}

template <typename T>
unsigned int	Array<T>::size() const {return _size;}

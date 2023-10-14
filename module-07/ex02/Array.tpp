/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:48:11 by prachman          #+#    #+#             */
/*   Updated: 2023/10/14 09:31:57 by prachman         ###   ########.fr       */
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
	if (this != &obj)
	{
		_size = obj._size;
		_arr = new T[_size];
		for (size_t i = 0; i < _size; ++i)
			_arr[i] = obj._arr[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	// std::cout << "Deconstructor called" << std::endl;
	delete[] _arr;
}

template <typename T>
size_t	Array<T>::getSize() {return _size;}

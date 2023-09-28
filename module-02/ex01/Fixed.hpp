/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prachman <prachman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:45:12 by truangsi          #+#    #+#             */
/*   Updated: 2023/09/28 17:28:37 by prachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int					_fixedValue;
		static const int	_fracBit = 8;

	public:
		Fixed(void);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed(void);

		void	setRawBits(int const raw );
		int		getRawBits(void ) const;
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
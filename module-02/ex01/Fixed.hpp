/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:45:12 by truangsi          #+#    #+#             */
/*   Updated: 2023/08/31 11:42:33 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int					_fixedNumValue;
		static const int	fracNumBit = 8;

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

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:35:16 by truangsi          #+#    #+#             */
/*   Updated: 2023/08/29 15:51:44 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	private:
		std::string	_comments[4];

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	(Harl::*funcPtr[4])(void);
	public:
		void	init();
		void	complain(std::string level);
};

#endif
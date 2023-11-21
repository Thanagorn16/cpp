/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:27:14 by truangsi          #+#    #+#             */
/*   Updated: 2023/11/21 15:37:48 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// int	main(int ac, char **av)
int	main()
{
	std::map<std::string, int> key;

	key["a"]=10;
	key["c"]=30;
	key["b"]=20;
	key["d"]=40;

	for (std::map<std::string, int>::iterator it=key.begin(); it!=key.end(); ++it)
		std::cout << it->first << " >> " << it->second <<std::endl;
	std::cout << "reverse" << std::endl;
	for (std::map<std::string, int>::reverse_iterator rit=key.rbegin(); rit!=key.rend(); ++rit)
		std::cout << rit->first << " >> " << rit->second <<std::endl;
}
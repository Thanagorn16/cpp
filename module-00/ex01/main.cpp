/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:05:14 by truangsi          #+#    #+#             */
/*   Updated: 2023/08/28 12:00:10 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook phoneBook;
	std::string input;

	input = "";
	while (1)
	{
		phoneBook.openBook();
		getline(std::cin >> std::ws, input);
		if (input.compare("ADD") == 0)
		{
			phoneBook.addContact();
		}
		else if (input.compare("SEARCH") == 0)
		{
			phoneBook.display();
		}
		else if (input.compare("EXIT") == 0)
			break ;
	}
	return (0);
}

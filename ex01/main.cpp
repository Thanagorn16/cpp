/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <truangsi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:05:14 by truangsi          #+#    #+#             */
/*   Updated: 2023/08/25 11:34:38 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::openBook()
{
	std::cout << std::endl;
	std::cout << "Enter one of the commands [ ADD / SEARCH / EXIT ]: ";
}

void	PhoneBook::addContact()
{
	static int  i;
	// if (i > 8)
	//     exit (0); // clear the contact later
	_contacts[i].init();
	_contacts[i].setIndex(i); //!is there a need to set the index?
	// printf("contact %d has index %d\n", i, _contacts[i].index);
	i++;
}

void	PhoneBook::display()
{
	std::cout << std::endl << "---------------- Contacts --------------------" << std::endl;
	for (int i = 0; i < 8; i++) //! if there's no more contact stop printing the index
	{
		_contacts[i].printContact(i);
	}
}

int	main()
{
	PhoneBook phoneBook;
	std::string input;

	input = "";
	while (1)
	{
		phoneBook.openBook();
		getline(std::cin, input);
		if (input.compare("ADD") == 0)
		{
			phoneBook.addContact();
		}
		else if (input.compare("SEARCH") == 0)
		{
			phoneBook.display();
		}
		// printf("out of add\n");
	}
}

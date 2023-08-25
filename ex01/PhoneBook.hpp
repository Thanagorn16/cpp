#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact	_contacts[8];

	public:
		void	addContact(void);
		void	openBook(void);
		void	display(void);

};

#endif
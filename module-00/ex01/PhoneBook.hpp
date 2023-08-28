#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact	_contacts[8];
		int		_index;

	public:
		void	addContact(void);
		void	openBook(void);
		void	setIndex(int index);
		void	display(void);
		int		checkRange(int IndexInput, int count) const;

};

#endif
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

// class	Car
// {
// 	public:
// 		Car();
// 		void	drive();
// };

class	PhoneBook
{
	private:
		Contact	_contacts[8];

	public:
		// Contact	contacts[8];
		void	addContact(void);
		void	openBook(void);
		void	display(void);

};

#endif
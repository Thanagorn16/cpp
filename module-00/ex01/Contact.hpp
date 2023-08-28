#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string.h>

class	Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNum;
		std::string _darkSecret;

		std::string	_getInput(std::string str) const;

	public:
		void	init();
		bool	printContact(int index);
		void	showSelectedContact();
};

#endif
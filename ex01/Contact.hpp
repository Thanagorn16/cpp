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
		int	_index;

		std::string	_getInput(std::string str) const;

	public:
		// int		index;

		void	init();
		void	setIndex(int i);
		bool	printContact(int index);

};

#endif
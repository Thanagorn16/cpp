#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

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
		void	printContact(int index);

};

#endif
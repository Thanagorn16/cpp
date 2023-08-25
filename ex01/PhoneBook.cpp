#include "PhoneBook.hpp"

void	PhoneBook::openBook()
{
	std::cout << std::endl;
	std::cout << "Enter one of the commands [ ADD / SEARCH / EXIT ]: ";
}

void	PhoneBook::setIndex(int index)
{
	if (index < 8)
		_index = index;
}

void	PhoneBook::addContact()
{
	static int  i;

	if (i == 8)
		i = 0;
	_contacts[i].init();
	setIndex(i);
	i++;
}

int	PhoneBook::checkRange(int indexInput, int _index) const
{
	int	i = 0;

	if (indexInput < 0 || indexInput > _index)
	{
		std::cout << "index is out of range" << std::endl;
		return (-1);
	}
	while (i < indexInput)
		i++;
	return (i);
}

void	PhoneBook::display()
{
	int	indexInput = 0;
	int	index;

	std::cout << std::endl << "---------------- Contacts ------------------" << std::endl;
	std::cout << '|' << std::setw(10) << "Index" << '|'
		<< std::setw(10) << "First Name" << '|'
		<< std::setw(10) << "Last Name" << '|'
		<< std::setw(10) << "Nickname" << '|' << std::endl;
	for (int i = 0; i < 8; i++)
	{
		_contacts[i].printContact(i);
	}
	std::cout << "Enter the contact's index: ";
	std::cin >> indexInput;
	index = checkRange(indexInput, _index);
	if (index < 0)
		return ;
	_contacts[index].showSelectedContact();
}
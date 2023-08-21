#include "Contact.hpp"

std::string    Contact::_getInput(std::string str) const
{
    std::string input;

    input = "";
    while (1)
    {
        std::cout << str;
        getline(std::cin, input);
        if (input.empty())
        {
            std::cout << "A contact can't have empty fields" << std::endl;
            continue;
        }
        else
            break ;
    }
    return (input);
}

void    Contact::init()
{
    _firstName = _getInput("Enter your first name: ");
    _lastName = _getInput("Enter your last name: ");
    _nickname = _getInput("Enter your nickname: ");
    _phoneNum = _getInput("Enter your phone number: ");
    _darkSecret = _getInput("Enter your darkest secrete: ");
    std::cout << "finised init\n";
}

void    Contact::setIndex(int index)
{
    _index = index;
}

void    Contact::printContact(int index)
{
    std::cout << std::setw(10) << index
        << std::setw(10) << _firstName
        << std::setw(10) << _lastName
        << std::setw(10) << _nickname << std::endl;
}



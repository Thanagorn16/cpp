#include <iostream>

// int main()
// {
//     std::string name;

//     std::cout << "what's your name?\n";
//     std::cin >> name;
//     //! to get the input that has spaces use 'getline()'
//     // std::getline(std::cin, name);
//     std::cout << "hello " << name << '!' << std::endl;
//     return 0;
// }

// case of cin before getline
int main()
{
    std::string name;
    int age;

    std::cout << "what's your age?\n";
    std::cin >> age;
    std::cout << "what's your name?\n";
    //! you need to do like below
    //! so that getline won't take whitespace/newline as an argument
    std::getline(std::cin >> std::ws, name);
    std::cout << "hello " << name << '!' << std::endl;
    std::cout << "you are " << age << " years old!" << std::endl;
    return 0;
}

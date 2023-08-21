#include <iostream>

int main()
{
    std::string aa = "hello world";
    std::string bb;

    // get length of str
    if (aa.length() >= 11)
        std::cout << "yes, the length is: " << aa.length() << std::endl;
    else
        std::cout << "no, the length is: " << aa.length() << std::endl;
    
    // check if it's empty string
    if (bb.empty())
        std::cout << "it's empty\n";
    else
        std::cout << "not empty\n";

    // get a char at index n
    std::cout << aa.at(0) << std::endl;

    // insert str at index n
    aa.insert(11, "!!!");
    std::cout << aa << std::endl;

    // find char in the str --> ret int
    std::cout << "the char is at index: " << aa.find(' ') << std::endl;

    // erase a portion of str 
    std::cout << aa.erase(0, 6) << std::endl;
    return 0;
}
#include <iostream>

int main()
{
    char    grades[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    std::string strs[] = {"aaa", "bbb"};

    std::cout << sizeof(grades)/sizeof(char) << " elements" << std::endl;
    std::cout << sizeof(strs)/sizeof(std::string) << " elements" << std::endl;
    return 0;
}
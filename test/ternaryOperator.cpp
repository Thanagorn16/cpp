#include <iostream>

int main()
{
    int grade = 111;

    grade >= 60 ? std::cout << "pass!" : std::cout << "fail!";
    //!another way to write the above
    // std::cout << (grade >= 60 ? "pass!" : "fail!");
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

typedef string text_t;
typedef int num_t;

int main()
{
    text_t  name = "Bro";
    num_t   age = 22;
    
    cout << name << endl;
    cout << age << endl;

    return 0;
}

// 'using' is better. However, this requires c++11 to compile.
// therefore, not allow to be used to 42 project
// using text_t = string;
// using num_t = int;

// int main()
// {
//     text_t name = "Bro";
//     num_t age = 22;
    
//     std::cout << name << std::endl;
//     std::cout << age << std::endl;

//     return 0;
// }
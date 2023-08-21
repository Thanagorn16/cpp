#include <iostream>
using namespace std;

namespace first
{
    int x = 1;
}

namespace second 
{
    int x = 2;
}

int main()
{
    // using namespace first;
    using namespace second;

    cout << x;

    return (0);
}
#include <iostream>
using namespace std;

void recursiveFunction(int x)
{
    if (x > 0)
    {
        recursiveFunction(x - 1);
        cout << x;
    }
}

int main()
{
    int x = 3;
    recursiveFunction(x);
}
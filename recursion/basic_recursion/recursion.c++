#include <iostream>
using namespace std;

void recursiveFunction(int x)
{
    if (x > 0)
    {
        cout << x;
        recursiveFunction(x - 1);
    }
}

int main()
{
    int x = 3;
    recursiveFunction(x);
}
#include <iostream>
using namespace std;

void functionA(int n);
void functionB(int n);

void functionA(int n)
{
    if (n > 0)
    {
        cout << n;
        functionB(n - 1);
    }
}

void functionB(int n)
{
    if (n > 1)
    {
        cout << n;
        functionA(n / 2);
    }
}

int main()
{
    functionA(20);
}
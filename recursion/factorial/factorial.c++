#include <iostream>
using namespace std;

// Factorial Using recursion
int factorial(int n)
{
    if (n <= 0)
    {
        return 1;
    }
    return factorial(n - 1) * n;
}

int main()
{
    int fact = factorial(5);
    cout << fact;
}
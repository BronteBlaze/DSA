#include <iostream>
using namespace std;

// Dynamic Recursion where the value of x will be dynamic in each function call
int recursiveFunction(int x)
{
    int sum = 0;
    if (x > 0)
    {
        sum = recursiveFunction(x - 1) + x;
    }
    return sum;
}

// Static Recursion where the value of a is always static in each function call
int staticRecursion(int x)
{
    static int a = 5;
    int sum = 0;
    if (x > 0)
    {
        sum = staticRecursion(x - 1) + a;
    }
    return sum;
}

int main()
{
    int x = 4;
    // Dynamic Sum
    int sum = recursiveFunction(x);
    cout << sum; // sum=10
    // Static Sum
    sum = staticRecursion(x);
    cout<<sum; // sum=20
}
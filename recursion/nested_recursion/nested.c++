#include <iostream>
using namespace std;

int functionA(int n)
{
    if (n > 100)
    {
        return n - 10;
    }
    return functionA(functionA(n + 11));
}

int main()
{
    int r = functionA(95);
    cout<<r;
}
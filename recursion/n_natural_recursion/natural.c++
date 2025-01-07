#include <iostream>
using namespace std;

int naturalRecursion(int n)
{
    if (n < 0)
    {
        return 0;
    }
    return naturalRecursion(n - 1) + n;
}

int main()
{
    int sum = naturalRecursion(5);
    cout<<sum;
}
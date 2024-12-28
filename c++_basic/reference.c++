#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    // Reference Variable[alias]
    int &a = x;
    int b = 10;
    a = b;
    cout << x << endl
         << a << endl;
}
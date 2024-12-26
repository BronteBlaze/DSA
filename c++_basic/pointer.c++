#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int *x;
    x = a; // x= &a[0], *x=1
    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
        cout << *(x + i) << endl; // *(x+i)=x[i]
}
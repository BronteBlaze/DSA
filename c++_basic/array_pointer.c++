#include <iostream>
using namespace std;

int *arr(int a[], int b) // function arr returning pointer and accepting pointer array and b
{
    int *x = new int[b];
    int j = 0;
    for (int i = b - 1; i >= 0; i--)
    {
        x[j] = a[i];
        j++;
    }
    return x;
}

int main()
{
    int x[] = {1, 2, 3, 4, 5};       // create array in a stack
    int n = sizeof(x) / sizeof(int); // determine the size of x which is 5
    int *p = arr(x, n);              // create a pointer and call the function arr
    for (int i = 0; i < n; i++)
    {
        cout << *(p + i) << endl;
    }
    delete[] p;
}
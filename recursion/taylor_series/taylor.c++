#include <iostream>
using namespace std;

// Taylor Series Using Recursion
double taylorSeries(int x, int n)
{
    static double p = 1, f = 1;
    double r;
    if (n <= 0)
        return 1;
    r = taylorSeries(x, n - 1);
    p = p * x;
    f = f * n;
    return r + (p / f);
}

int main()
{
    double series = taylorSeries(5, 10);
    cout << series;
}
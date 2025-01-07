#include <iostream>
using namespace std;

// Method 1
int powerOfNumber(int m, int n)
{
    if (n <= 0)
    {
        return 1;
    }
    return powerOfNumber(m, n - 1) * m;
}

// Method 2
int powerOfNumber2(int m, int n)
{
    if (n <= 0)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        return powerOfNumber2(m * m, n / 2);
    }
    else
    {
        return m * powerOfNumber2(m * m, (n - 1) / 2);
    }
}

int main()
{
    int power = powerOfNumber2(5, 5);
    cout << power;
}
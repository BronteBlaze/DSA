#include <iostream>
using namespace std;

// One function calling itself multiple time is called tree recursion
void tree_recursion(int x)
{
    if (x > 0)
    {
        cout << x << " ";
        tree_recursion(x - 1);
        tree_recursion(x - 1);
    }
}

int main()
{
    tree_recursion(4);
}
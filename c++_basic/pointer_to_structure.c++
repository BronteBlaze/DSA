#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;

    Rectangle(int l, int b)
    {
        this->length = l;
        this->breadth = b;
    }
};

int main()
{
    struct Rectangle *r = new Rectangle(20, 10);
    cout << r->length << endl
         << r->breadth << endl;
    delete r;
}
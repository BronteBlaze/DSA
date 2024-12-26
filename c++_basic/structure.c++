#include <iostream>
#include<cstring>
using namespace std;

struct Book {
    int n;
    char book_name[20];
    int book_price;

    Book() {
        n=2;
        strcpy(book_name, "Programming");
        book_price=100;
    }
};

int main() {
    struct Book b1;
    cout<<b1.book_name<<b1.book_price<<b1.n;
    return 0;
}
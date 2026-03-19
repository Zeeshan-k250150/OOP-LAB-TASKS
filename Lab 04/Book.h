#ifndef BOOK_H
#define BOOK_H
#include <iostream>
using namespace std;

class Book {
private:
    const string ISBN;
    string title;

public:
    Book(string isbn, string t);
    void displayDetails() const;
    void updateTitle(string newTitle);
};
#endif

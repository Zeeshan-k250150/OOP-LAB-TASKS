#include "Book.h"

Book::Book(string isbn, string t) : ISBN(isbn) {
    title = t;
}

void Book::displayDetails() const {
    cout << "ISBN: " << ISBN << ", Title: " << title << endl;
}

void Book::updateTitle(string newTitle) {
    title = newTitle;
}

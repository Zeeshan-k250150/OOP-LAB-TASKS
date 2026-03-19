#include "BookAgg.h"

BookAgg::BookAgg(string t) {
    title = t;
    count = 0;
}

void BookAgg::addAuthor(Author* a) {
    if (count < 5) {
        authors[count++] = a;
    }
}

void BookAgg::displayAuthors() {
    cout << "Book: " << title << endl;
    for (int i = 0; i < count; i++) {
        cout << authors[i]->name << " (ID: " << authors[i]->authorID << ")\n";
    }
}

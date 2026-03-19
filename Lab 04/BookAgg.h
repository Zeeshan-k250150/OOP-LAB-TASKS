#ifndef BOOKAGG_H
#define BOOKAGG_H
#include "Author.h"

class BookAgg {
private:
    string title;
    Author* authors[5];
    int count;

public:
    BookAgg(string t);
    void addAuthor(Author* a);
    void displayAuthors();
};
#endif

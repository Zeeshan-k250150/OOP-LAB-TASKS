#include <iostream>
using namespace std;

class Librarian; // Forward declaration

class Book {
private:
    string title;
    string author;
    float price;

public:
    Book(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
    }

    friend class Librarian;
    friend void applyDiscount(Book &b, float percent);

    // << overload
    friend ostream& operator<<(ostream &out, Book b) {
        out << b.title << " by " << b.author << " - Rs. " << b.price;
        return out;
    }

    // == overload
    bool operator==(Book b) {
        return title == b.title;
    }
};

class Member {
private:
    string name;
    string borrowedBookTitle;

public:
    Member(string n) {
        name = n;
        borrowedBookTitle = "";
    }

    friend class Librarian;
};

class Librarian {
public:
    void displayBooks(Book books[], int size) {
        for (int i = 0; i < size; i++)
            cout << books[i] << endl;
    }

    void borrowBook(Member &m, Book &b) {
        m.borrowedBookTitle = b.title;
        cout << m.name << " borrowed " << b.title << endl;
    }
};

// Friend function
void applyDiscount(Book &b, float percent) {
    b.price -= (b.price * percent / 100);
}

int main() {
    Book books[2] = {
        Book("C++ Basics", "Bjarne", 500),
        Book("OOP Concepts", "Stroustrup", 700)
    };

    Member m("Ali");
    Librarian l;

    cout << "Books:\n";
    l.displayBooks(books, 2);

    l.borrowBook(m, books[0]);

    applyDiscount(books[0], 10);

    cout << "\nAfter Discount:\n";
    cout << books[0] << endl;

    return 0;
}
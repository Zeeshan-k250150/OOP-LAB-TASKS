#include "University.h"
#include "Book.h"
#include "Author.h"
#include "BookAgg.h"
#include "Computer.h"
#include "Student.h"

int main() {

    University u1("FAST-NUCES Karachi");
    University u2("FAST-NUCES Lahore");

    u1.displayInfo();
    u2.displayInfo();

    cout << "Total Students: "
         << University::getTotalStudents() << endl;

    cout << "\n====================\n";

    const Book b1("123-FAST", "OOP in C++");
    b1.displayDetails();

    cout << "\n====================\n";

    Author a1("Zeeshan Azam", 1);
    Author a2("Ali Khan", 2);

    BookAgg book("FAST Computing");
    book.addAuthor(&a1);
    book.addAuthor(&a2);
    book.displayAuthors();

    cout << "\n====================\n";

    Computer comp("Intel i7", 3.4, 16, "DDR4");
    comp.displaySpecs();

    cout << "\n====================\n";

    Student students[2];

    int m1[5] = {85, 90, 88, 92, 87};
    int m2[5] = {75, 80, 70, 78, 82};

    students[0].setData("Zeeshan Azam", m1);
    students[1].setData("Ahmed Ali", m2);

    for (int i = 0; i < 2; i++) {
        students[i].display();
    }

    return 0;
}

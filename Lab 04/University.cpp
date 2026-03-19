#include "University.h"
int University::totalStudents = 0;

University::University(string name) {
    universityName = name;
    totalStudents++;
}

int University::getTotalStudents() {
    return totalStudents;
}

void University::displayInfo() {
    cout << "University: " << universityName << endl;
    cout << "Total Students: " << totalStudents << endl;
}

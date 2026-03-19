#include "Student.h"

int Student::counter = 0;

Student::Student() {
    id = ++counter;
}

void Student::setData(string n, int m[]) {
    name = n;
    for (int i = 0; i < 5; i++) {
        marks[i] = m[i];
    }
}

double Student::average() {
    int sum = 0;
    for (int i = 0; i < 5; i++) sum += marks[i];
    return sum / 5.0;
}

void Student::display() {
    cout << "ID: " << id << ", Name: " << name
         << ", Average: " << average() << endl;
}

double Student::getAverage() {
    return average();
}

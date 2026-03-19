#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <iostream>
using namespace std;

class University {
private:
    static int totalStudents;
    string universityName;

public:
    University(string name);
    static int getTotalStudents();
    void displayInfo();
};
#endif

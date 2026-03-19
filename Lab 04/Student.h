#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student {
private:
    static int counter;
    int id;
    string name;
    int marks[5];

public:
    Student();
    void setData(string n, int m[]);
    double average();
    void display();
    double getAverage();
};
#endif

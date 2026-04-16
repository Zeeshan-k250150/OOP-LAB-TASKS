#include <iostream>
using namespace std;

class Employee {
public:
    virtual double calculateSalary() {
        return 0;
    }

    virtual ~Employee() {}
};

class Manager : public Employee {
public:
    double calculateSalary() override {
        return 80000 + 10000; // base + bonus
    }
};

class Developer : public Employee {
public:
    double calculateSalary() override {
        return 60000 + 5000; // base + project bonus
    }
};

int main() {
    Employee* emp;

    Manager m;
    Developer d;

    emp = &m;
    cout << "Manager Salary: " << emp->calculateSalary() << endl;

    emp = &d;
    cout << "Developer Salary: " << emp->calculateSalary() << endl;

    return 0;
}
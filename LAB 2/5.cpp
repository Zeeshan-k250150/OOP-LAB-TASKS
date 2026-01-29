#include <iostream>
using namespace std;

struct EmployeeStruct {
    int id;
    float salary;
};

class EmployeeClass {
private:
    int id;
    float salary;

public:
    void setData(int i, float s) {
        id = i;
        salary = s;
    }

    void displayData() {
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    EmployeeStruct e1;
    e1.id = 1;
    e1.salary = 50000;
    cout << "EmployeeStruct Data:\n";
    cout << "ID: " << e1.id << endl;
    cout << "Salary: " << e1.salary << endl;

    EmployeeClass e2;
    e2.setData(2, 60000);
    cout << "\nEmployeeClass Data:\n";
    e2.displayData();

    return 0;
}

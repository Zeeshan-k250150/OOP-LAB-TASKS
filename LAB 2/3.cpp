#include <iostream>
using namespace std;

class Student {
private:
    int rollNumber;
    float cgpa;

public:
    void setData(int r, float c) {
        rollNumber = r;
        cgpa = c;
    }

    void displayData() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "CGPA: " << cgpa << endl;
 }
};

int main() {
    Student s;
    s.setData(101, 3.75);
    s.displayData();
    return 0;
}

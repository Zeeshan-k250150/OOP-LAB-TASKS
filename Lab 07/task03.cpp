#include <iostream>
using namespace std;

class Student {
private:
    int grades[5];

public:
    void inputGrades() {
        cout << "Enter 5 grades:\n";
        for (int i = 0; i < 5; i++)
            cin >> grades[i];
    }

    friend double calculateAverage(Student &s);
    friend double findHighestGrade(Student &s);
};

double calculateAverage(Student &s) {
    int sum = 0;
    for (int i = 0; i < 5; i++)
        sum += s.grades[i];

    return sum / 5.0;
}

double findHighestGrade(Student &s) {
    int max = s.grades[0];
    for (int i = 1; i < 5; i++)
        if (s.grades[i] > max)
            max = s.grades[i];

    return max;
}

int main() {
    Student s;
    s.inputGrades();

    cout << "Average: " << calculateAverage(s) << endl;
    cout << "Highest: " << findHighestGrade(s) << endl;

    return 0;
}
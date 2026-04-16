#include <iostream>
using namespace std;

class Shape {
public:
    double area(double radius) {
        return 3.14 * radius * radius; // Circle
    }

    double area(double length, double width) {
        return length * width; // Rectangle
    }

    double area(double base, double height, bool isTriangle) {
        return 0.5 * base * height; // Triangle
    }
};

int main() {
    Shape s;

    cout << "Circle Area: " << s.area(5) << endl;
    cout << "Rectangle Area: " << s.area(4, 6) << endl;
    cout << "Triangle Area: " << s.area(3, 8, true) << endl;

    return 0;
}
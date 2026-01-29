#include <iostream>
using namespace std;

int main() {
    int i;
    float f;
    double d;
    char c;
    bool b;

    cout << "Enter int: ";
    cin >> i;
    cout << "Enter float: ";
    cin >> f;
    cout << "Enter double: ";
    cin >> d;
    cout << "Enter char: ";
    cin >> c;
    cout << "Enter bool (0 or 1): ";
    cin >> b;

    cout << "\nValues entered:\n";
    cout << "Int: " << i << endl;
    cout << "Float: " << f << endl;
    cout << "Double: " << d << endl;
    cout << "Char: " << c << endl;
    cout << "Bool: " << b << endl;

    return 0;
}

#include <iostream>
using namespace std;

void square(int num) {
    cout << "Square: " << num * num;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    square(n);
    return 0;
}

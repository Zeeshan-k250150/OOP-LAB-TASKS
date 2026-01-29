#include <iostream>
using namespace std;

int main() {
    int arr[5], sum = 0;

    cout << "Enter 5 elements:\n";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum: " << sum << endl;
    cout << "Reverse order: ";
    for(int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}

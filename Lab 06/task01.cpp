#include <iostream>
using namespace std;

class Payment {
public:
    void pay(double amount) {
        cout << "Paid Rs. " << amount << " via Cash\n";
    }

    void pay(double amount, string cardNumber) {
        cout << "Paid Rs. " << amount << " using Card: " << cardNumber << endl;
    }

    void pay(double amount, string bank, string accountNumber) {
        cout << "Paid Rs. " << amount << " via Online Transfer\n";
        cout << "Bank: " << bank << ", Account: " << accountNumber << endl;
    }
};

int main() {
    Payment p;

    p.pay(500); // Cash
    p.pay(1200, "1234-5678-9012"); // Card
    p.pay(2000, "HBL", "PK123456789"); // Online

    return 0;
}
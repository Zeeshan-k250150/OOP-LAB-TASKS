#include <iostream>
using namespace std;

class Customer; // Forward declaration

class Account {
private:
    int accountNumber;
    double balance;

public:
    Account(int accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
    }

    friend bool verifyAccount(Account, Customer);
};

class Customer {
private:
    string name;
    int accountNumber;

public:
    Customer(string n, int accNo) {
        name = n;
        accountNumber = accNo;
    }

    friend bool verifyAccount(Account, Customer);
};

// Friend function
bool verifyAccount(Account a, Customer c) {
    return (a.accountNumber == c.accountNumber && a.balance > 0);
}

int main() {
    Account acc(101, 5000);
    Customer cust("Ali", 101);

    if (verifyAccount(acc, cust))
        cout << "Account verified\n";
    else
        cout << "Verification failed\n";

    return 0;
}
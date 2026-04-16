#include <iostream>
using namespace std;

class Account {
protected:
    double balance;

public:
    Account(double b) { balance = b; }

    virtual double calculateInterest() {
        return 0;
    }

    virtual ~Account() {}
};

class SavingsAccount : public Account {
public:
    SavingsAccount(double b) : Account(b) {}

    double calculateInterest() override {
        return balance * 0.05; // 5%
    }
};

class CurrentAccount : public Account {
public:
    CurrentAccount(double b) : Account(b) {}

    double calculateInterest() override {
        return balance * 0.02; // 2%
    }
};

int main() {
    Account* acc;

    SavingsAccount s(10000);
    CurrentAccount c(10000);

    acc = &s;
    cout << "Savings Interest: " << acc->calculateInterest() << endl;

    acc = &c;
    cout << "Current Interest: " << acc->calculateInterest() << endl;

    return 0;
}
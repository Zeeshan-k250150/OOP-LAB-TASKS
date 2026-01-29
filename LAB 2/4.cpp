#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    void deposit(double amount);
    void withdraw(double amount);
    void showBalance();
};

void BankAccount::deposit(double amount) {
    balance += amount;
}

void BankAccount::withdraw(double amount) {
    if (amount <= balance)
        balance -= amount;
    else
        cout << "Insufficient Balance\n";
}

void BankAccount::showBalance() {
    cout << "Balance: " << balance << endl;
}

int main() {
    BankAccount acc;
    acc.deposit(1000);
    acc.withdraw(300);
    acc.showBalance();
    return 0;
}

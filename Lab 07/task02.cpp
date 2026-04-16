#include <iostream>
using namespace std;

class Teller; // Forward declaration

class BankAccount {
private:
    string accountHolder;
    double balance;
    int pin;

public:
    BankAccount(string name, double bal, int p) {
        accountHolder = name;
        balance = bal;
        pin = p;
    }

    friend class Teller;
};

class Teller {
public:
    void display(BankAccount &acc) {
        cout << "Name: " << acc.accountHolder << endl;
        cout << "Balance: " << acc.balance << endl;
    }

    void deposit(BankAccount &acc, double amount) {
        acc.balance += amount;
    }

    void withdraw(BankAccount &acc, double amount) {
        if (amount <= acc.balance)
            acc.balance -= amount;
        else
            cout << "Insufficient balance\n";
    }

    bool validatePIN(BankAccount &acc, int enteredPin) {
        return acc.pin == enteredPin;
    }
};

// Non-friend class (cannot access private members)
class Hacker {
public:
    void tryAccess(BankAccount &acc) {
        // cout << acc.balance; ❌ ERROR (private)
        cout << "Access denied!\n";
    }
};

int main() {
    BankAccount acc("Sara", 1000, 1234);
    Teller t;

    t.display(acc);
    t.deposit(acc, 500);
    t.withdraw(acc, 200);

    cout << "PIN Valid: " << t.validatePIN(acc, 1234) << endl;

    Hacker h;
    h.tryAccess(acc);

    return 0;
}
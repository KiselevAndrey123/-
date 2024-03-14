#include <iostream>

using namespace std;


class BankAccount {
protected:
    double balance;

public:
    BankAccount() : balance(0.0) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: $" << amount << endl;
    }

    virtual void withdraw(double amount) {
        cout << "Withdrawal from a generic bank account" << endl;
    }
};

class SavingsAccount : public BankAccount {
public:
    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << " from Savings Account" << endl;
        }
        else {
            cout << "Insufficient funds in Savings Account" << endl;
        }
    }
};


class CheckingAccount : public BankAccount {
public:
    void withdraw(double amount) override {
        double fee = 1.5; 
        double limit = 1000.0; 

        if (amount + fee <= balance && amount <= limit) {
            balance -= (amount + fee);
            cout << "Withdrawn: $" << amount << " from Checking Account with a fee of $" << fee << endl;
        }
        else if (amount > limit) {
            cout << "Exceeded withdrawal limit for Checking Account" << endl;
        }
        else {
            cout << "Insufficient funds in Checking Account" << endl;
        }
    }
};

int main() {
    SavingsAccount savings;
    CheckingAccount checking;

    savings.deposit(500.0);
    savings.withdraw(200.0);

    checking.deposit(1500.0);
    checking.withdraw(800.0);

    return 0;
}
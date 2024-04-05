#include <iostream>

using namespace std;

class BankAccount {
protected:
    double balance;

public:
    BankAccount() : balance(0.0) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Внесено: $" << amount << endl;
    }

    virtual void withdraw(double amount) {
        cout << "Списание с общего банковского счета" << endl;
    }
};

class SavingsAccount : public BankAccount {
public:
    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
            cout << "Снято: $" << amount << " со сберегательного счета" << endl;
        }
        else {
            cout << "Недостаточно средств на сберегательном счете" << endl;
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
            cout << "Снято: $" << amount << " с чекового счета с комиссией $" << fee << endl;
        }
        else if (amount > limit) {
            cout << "Превышен лимит на снятие для чекового счета" << endl;
        }
        else {
            cout << "Недостаточно средств на чековом счете" << endl;
        }
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    SavingsAccount savings;
    CheckingAccount checking;

    savings.deposit(500.0);
    savings.withdraw(200.0);

    checking.deposit(1500.0);
    checking.withdraw(800.0);

    return 0;
}

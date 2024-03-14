#include <iostream>

using namespace std;


class Employee {
public:
    virtual double CalculateSalary() {
        cout << "Calculating salary for a generic employee" << endl;
        return 0.0;
    }
};

class Manager : public Employee {
private:
    double baseSalary;
    double bonus;

public:
    Manager(double bs, double bo) : baseSalary(bs), bonus(bo) {}

    double CalculateSalary() override {
        return baseSalary + bonus;
    }
};

class Programmer : public Employee {
private:
    double hourlyRate;
    double hoursWorked;

public:
    Programmer(double hr, double hw) : hourlyRate(hr), hoursWorked(hw) {}

    double CalculateSalary() override {
        return hourlyRate * hoursWorked;
    }
};

int main() {
    Manager manager(50000.0, 10000.0);
    Programmer programmer(50.0, 160.0);

    cout << "Manager's Salary: " << manager.CalculateSalary() << endl;
    cout << "Programmer's Salary: " << programmer.CalculateSalary() << endl;

    return 0;
}
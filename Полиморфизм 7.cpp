#include <iostream>

using namespace std;


class Vehicle {
public:
    virtual void SpeedUp() {
        cout << "Vehicle is speeding up" << endl;
    }
};


class Car : public Vehicle {
public:
    void SpeedUp() override {
        cout << "Car is accelerating" << endl;
    }
};


class Bicycle : public Vehicle {
public:
    void SpeedUp() override {
        cout << "Bicycle is pedaling faster" << endl;
    }
};

int main() {
    Vehicle* car = new Car();
    Vehicle* bicycle = new Bicycle();

    car->SpeedUp();     
    bicycle->SpeedUp(); 

    delete car;
    delete bicycle;

    return 0;
}
#include <iostream>

using namespace std;


class Vehicle {
public:
    virtual void startEngine() {
        cout << "Starting the engine of a generic vehicle" << endl;
    }

    virtual void stopEngine() {
        cout << "Stopping the engine of a generic vehicle" << endl;
    }
};


class Car : public Vehicle {
public:
    void startEngine() override {
        cout << "Starting the engine of a car" << endl;
    }

    void stopEngine() override {
        cout << "Stopping the engine of a car" << endl;
    }
};


class Motorcycle : public Vehicle {
public:
    void startEngine() override {
        cout << "Starting the engine of a motorcycle" << endl;
    }

    void stopEngine() override {
        cout << "Stopping the engine of a motorcycle" << endl;
    }
};

int main() {
    Car car;
    Motorcycle motorcycle;

    car.startEngine();   
    car.stopEngine();    

    motorcycle.startEngine(); 
    motorcycle.stopEngine();  

    return 0;
}
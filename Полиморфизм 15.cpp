#include <iostream>

using namespace std;

class Vehicle {
public:
    virtual void startEngine() {
        cout << "Запуск двигателя у общего транспортного средства" << endl;
    }

    virtual void stopEngine() {
        cout << "Остановка двигателя у общего транспортного средства" << endl;
    }
};

class Car : public Vehicle {
public:
    void startEngine() override {
        cout << "Запуск двигателя у автомобиля" << endl;
    }

    void stopEngine() override {
        cout << "Остановка двигателя у автомобиля" << endl;
    }
};

class Motorcycle : public Vehicle {
public:
    void startEngine() override {
        cout << "Запуск двигателя у мотоцикла" << endl;
    }

    void stopEngine() override {
        cout << "Остановка двигателя у мотоцикла" << endl;
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    Car car;
    Motorcycle motorcycle;

    car.startEngine();
    car.stopEngine();

    motorcycle.startEngine();
    motorcycle.stopEngine();

    return 0;
}

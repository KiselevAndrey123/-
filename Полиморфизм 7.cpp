#include <iostream>

using namespace std;

class Vehicle {
public:
    virtual void SpeedUp() {
        cout << "Транспортное средство ускоряется" << endl;
    }
};

class Car : public Vehicle {
public:
    void SpeedUp() override {
        cout << "Автомобиль ускоряется" << endl;
    }
};

class Bicycle : public Vehicle {
public:
    void SpeedUp() override {
        cout << "Велосипед набирает скорость" << endl;
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    Vehicle* car = new Car();
    Vehicle* bicycle = new Bicycle();

    car->SpeedUp();
    bicycle->SpeedUp();

   

    return 0;
}

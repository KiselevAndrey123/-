#include <iostream>

using namespace std;

class Animal {
public:
    virtual void move() {
        cout << "Животное движется" << endl;
    }

    virtual void makeSound() {
        cout << "Звук животного" << endl;
    }
};


class Bird : public Animal {
public:
    void move() override {
        cout << "Птица летит" << endl;
    }

    void makeSound() override {
        cout << "Чирик-чирик" << endl;
    }
};


class Panthera : public Animal {
public:
    void move() override {
        cout << "Пантера бежит" << endl;
    }

    void makeSound() override {
        cout << "Рев" << endl;
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    Bird bird;
    Panthera panthera;

    bird.move();
    bird.makeSound();

    panthera.move();
    panthera.makeSound();
    return 0;
}

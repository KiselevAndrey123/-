#include <iostream>

using namespace std;


class Animal {
public:
    virtual void move() {
        cout << "Animal is moving" << endl;
    }

    virtual void makeSound() {
        cout << "Animal sound" << endl;
    }
};


class Bird : public Animal {
public:
    void move() override {
        cout << "Bird is flying" << endl;
    }

    void makeSound() override {
        cout << "Tweet tweet" << endl;
    }
};


class Panthera : public Animal {
public:
    void move() override {
        cout << "Panthera is running" << endl;
    }

    void makeSound() override {
        cout << "Roar" << endl;
    }
};

int main() {
    Bird bird;
    Panthera panthera;

    bird.move();     
    bird.makeSound();
    
    panthera.move();     
    panthera.makeSound(); 
    return 0;
}
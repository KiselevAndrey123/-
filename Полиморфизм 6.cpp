#include <iostream>
using namespace std;

class Animal {
public:
    virtual void Sound() {
        cout << "Animal sound" << endl;
    }
};


class Bird : public Animal {
public:
    void Sound() override {
        cout << "Tweet tweet" << endl;
    }
};


class Cat : public Animal {
public:
    void Sound() override {
        cout << "Meow meow" << endl;
    }
};

int main() {
    Animal* bird = new Bird();
    Animal* cat = new Cat();

    bird->Sound(); 
    cat->Sound();  

    delete bird;
    delete cat;

    return 0;
}
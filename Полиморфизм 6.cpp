#include <iostream>
using namespace std;

class Animal {
public:
    virtual void Sound() {
        cout << "Звук животного" << endl;
    }
};

class Bird : public Animal {
public:
    void Sound() override {
        cout << "Чирик-чирик" << endl;
    }
};

class Cat : public Animal {
public:
    void Sound() override {
        cout << "Мяу-мяу" << endl;
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    Animal* bird = new Bird();
    Animal* cat = new Cat();

    bird->Sound();
    cat->Sound();

    

    return 0;
}

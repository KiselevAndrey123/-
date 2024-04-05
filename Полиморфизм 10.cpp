#include <iostream>

using namespace std;

class Sports {
public:
    virtual void play() {
        cout << "Играем в общий вид спорта" << endl;
    }
};

class Football : public Sports {
public:
    void play() override {
        cout << "Играем в футбол" << endl;
    }
};

class Basketball : public Sports {
public:
    void play() override {
        cout << "Играем в баскетбол" << endl;
    }
};

class Rugby : public Sports {
public:
    void play() override {
        cout << "Играем в регби" << endl;
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    Football football;
    Basketball basketball;
    Rugby rugby;

    football.play();
    basketball.play();
    rugby.play();

    return 0;
}

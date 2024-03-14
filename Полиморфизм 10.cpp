#include <iostream>

using namespace std;


class Sports {
public:
    virtual void play() {
        cout << "Playing a generic sport" << endl;
    }
};


class Football : public Sports {
public:
    void play() override {
        cout << "Playing football" << endl;
    }
};


class Basketball : public Sports {
public:
    void play() override {
        cout << "Playing basketball" << endl;
    }
};

class Rugby : public Sports {
public:
    void play() override {
        cout << "Playing rugby" << endl;
    }
};

int main() {
    Football football;
    Basketball basketball;
    Rugby rugby;

    football.play();   
    basketball.play(); 
    rugby.play();      

    return 0;
}
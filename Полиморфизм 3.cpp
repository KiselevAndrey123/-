#include <iostream>
using namespace std;
class Circle {
private:
    double x;
    double y;
    double radius;

public:
   
    Circle(double r) : x(0), y(0), radius(r) {}

    Circle(double centerX, double centerY, double r) : x(centerX), y(centerY), radius(r) {}

    Circle(double centerX, double centerY) : x(centerX), y(centerY), radius(1.0) {} 

    Circle() : x(0), y(0), radius(1.0) {} 

    void printInfo() {
        std::cout << "Circle center: (" << x << ", " << y << "), Radius: " << radius << std::endl;
    }
};

int main() {
    Circle circle1(5.0);
    Circle circle2(2.0, 3.0);
    Circle circle3(1.0, 1.0, 4.0);
    Circle circle4;

    circle1.printInfo();
    circle2.printInfo();
    circle3.printInfo();
    circle4.printInfo();

    return 0;
}
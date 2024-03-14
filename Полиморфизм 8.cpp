#include <iostream>

using namespace std;


class Shape {
public:
    virtual double CalculationArea() {
        cout << "Calculating area of a generic shape" << endl;
        return 0.0;
    }
};


class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double CalculationArea() override {
        return 3.14159 * radius * radius;
    }
};


class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double CalculationArea() override {
        return length * width;
    }
};


class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double CalculationArea() override {
        return 0.5 * base * height;
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Triangle triangle(3.0, 4.0);

    cout << "Circle Area: " << circle.CalculationArea() << endl;
    cout << "Rectangle Area: " << rectangle.CalculationArea() << endl;
    cout << "Triangle Area: " << triangle.CalculationArea() << endl;

    return 0;
}
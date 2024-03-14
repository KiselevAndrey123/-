#include <iostream>
#include <string>

using namespace std;


class Student
{
    
public:
    string firstName;
    string lastName;
    string group;
    double averageMark;

    Student(string firstName, string lastName, string group, double averageMark) 
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->group = group;
        this->averageMark = averageMark;
    }
    

    virtual double getScholarship()
    {
        if (averageMark == 5.0) {
            return 2000;
        }
        else {
            return 1900;
        }
    }
};

class Aspirant : public Student {
public:
    Aspirant(string firstName, string lastName, string group, double averageMark) : Student(firstName, lastName, group, averageMark) {}

    double getScholarship() override {
        if (averageMark == 5.0) {
            return 2500;
        }
        else {
            return 2200;
        }
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    Student students[] = {
        Student("Andrey", "Sergey", "ПИи23", 4.5),
        Aspirant("Sasha", "Pavel", "ПИэ23", 5.0)
    };

    for (Student student : students) {
        cout << student.firstName << ", " << student.lastName << " получают стипендию: " << student.getScholarship() << endl;
    }

    return 0;
}
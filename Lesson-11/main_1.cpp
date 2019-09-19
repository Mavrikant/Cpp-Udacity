#include <iostream>
#include <string>

using namespace std;

//The base class
class Student {
private:
    int id;
public:
    void setId(int idIn);

    int getId();

    Student();
};

Student::Student() {
    id = 000000000;
}

void Student::setId(int idIn) {
    id = idIn;
}

int Student::getId() {
    return id;
}

//The derived class with Student as base class
class GradStudent : public Student {
private:
    string degree;
public:
    GradStudent();

    void setDegree(string degreeIn);

    string getDegree();
};

GradStudent::GradStudent() {
    degree = "undelcared";
}

void GradStudent::setDegree(string degreeIn) {
    degree = degreeIn;
}

string GradStudent::getDegree() {
    return degree;
}

int main_1() {
    //Create an instance of the derived class,
    //GradStudent
    GradStudent gs1;

    //Set the id of the grad student
    //using the function in the base class
    gs1.setId(123456789);

    //Set the degree of the grad student
    //using the function in the derived class
    gs1.setDegree("BSEE");

    cout << gs1.getId() << " " << gs1.getDegree();
    return 0;
}
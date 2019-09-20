//
// Created by serdar on 20.09.2019.
//

#include<iostream>
#include<string>

using namespace std;

class Patient {
private:
    int idNumber;
public:
    void setIdNumber(int idIn);

    int getIdNumber();
};

void Patient::setIdNumber(int idIn) {
    idNumber = idIn;
}

int Patient::getIdNumber() {
    return idNumber;
}

class Dog {
private:
    string breed;
public:
    void setBreed(string breedIn);

    string getBreed();
};

void Dog::setBreed(string breedIn) {
    breed = breedIn;
}

string Dog::getBreed() {
    return breed;
}

class Pet : public Dog, public Patient {
private:
    string Name;
public:
    Pet();
    void setName(string NameIn);

    string getName();
};

Pet::Pet() {
    Name = "NA";
}

void Pet::setName(string NameIn) {
    Name = NameIn;
}

string Pet::getName() {
    return Name;
}

int main() {
    Pet p1;
    p1.setName("Kali");
    p1.setIdNumber(44444);
    p1.setBreed("Aussie");

    cout << p1.getName() << " " << p1.getIdNumber() << " " << p1.getBreed();
    return 0;
}
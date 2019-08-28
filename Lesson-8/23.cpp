//
// Created by serdar on 29.08.2019.
//
#include<iostream>

using namespace std;

class Dog {
    string name;
    int licenseNumber;
public:
    Dog();

    void setName(string nameIn);

    void setLicenseNumber(int licenseNumberIn);

    string getName();

    int getLicenseNumber();

    void printInfo();
};

Dog::Dog() {
    name = "Unknown";
    licenseNumber = -1;
}

void Dog::setName(string nameIn) {
    name = nameIn;
}

void Dog::setLicenseNumber(int licenseNumberIn) {
    licenseNumber = licenseNumberIn;
}

string Dog::getName() {
    return name;
}

int Dog::getLicenseNumber() {
    return licenseNumber;
}

void Dog::printInfo() {
    cout << name << " " << licenseNumber;
}


void printRoster(Dog roster[], int size) {
    for (int i = 0; i < size; i++) {
        roster[i].printInfo();
        cout << "\n\n";
    }
}

int mai_23n() {
    const int SIZE = 3;
    Dog roster[SIZE];

    roster[0].setName("Blue");
    roster[1].setName("King");
    roster[2].setName("Spot");

    printRoster(roster, SIZE);
    return 0;
}

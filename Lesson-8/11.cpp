/*The header file for main.cpp*/

#include<iostream>

using namespace std;

class Dog {
    string name;
    int licenseNumber;


public:
    string getName() {
        return name;
    }

    int getLicenseNumber() {
        return licenseNumber;
    }

    void printInfo() {
        cout << name << " " << licenseNumber;
    }

    void setLicenseNumber(int licenseNumberIn) {
        licenseNumber = licenseNumberIn;
    }

    void setName(string nameIn) {
        name = nameIn;
    }
};


int main_11() {
    Dog dog1, dog2;
    dog1.setName("Trixie");
    dog2.setName("Kali");
    dog1.setLicenseNumber(1234);
    dog2.setLicenseNumber(5678);

    dog1.printInfo();
    cout << "\n";
    dog2.printInfo();
    return 0;
}
//
// Created by serdar on 18.09.2019.
//

#include<iostream>
#include<string>

using namespace std;

class Dog {
private:
    string name;
    int license;
public:
    Dog() {
        name = "NA";
        license = 0;
    }

    Dog(string nameIn) {
        name = nameIn;
        license = 0;
    }

    Dog(int licIn) {
        name = "NA";
        license = licIn;
    }

    Dog(string nameIn, int licIn) {
        name = nameIn;
        license = licIn;
    }

    string getName() {
        return name;
    }

    int getLicense() {
        return license;
    }
};


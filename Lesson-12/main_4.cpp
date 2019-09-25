//
// Created by Serdar on 26.09.2019.
//

//header file for main.cpp

#include<iostream>
#include<string>

using namespace std;

class Animal {
private:
    string name;
    float baseRate;
    string type;
public:
    Animal(string nameIn, float baseRateIn, string typeIn);

    //this is our virtual function
    virtual float calcDailyRate();

    float getBaseRate();
};

Animal::Animal(string nameIn, float baseRateIn, string typeIn) {
    name = nameIn;
    baseRate = baseRateIn;
    type = typeIn;
}

//we would never actual calcualte a daily rate for
//an "animal" so we don't really need this function.
float Animal::calcDailyRate() {
    return baseRate * 1.0;
}

float Animal::getBaseRate() {
    return baseRate;
}

class Cat : public Animal {
public:
    Cat(string nameIn, float baseRateIn, string typeIn);

    float calcDailyRate();
};

Cat::Cat(string nameIn, float baseRateIn, string typeIn)
        : Animal(nameIn, baseRateIn, typeIn) {
    cout << "\nin cat constructor";
}

float Cat::calcDailyRate() {
    return Animal::getBaseRate() * 1.5;
}

//=============
class Dog : public Animal {
public:
    Dog(string nameIn, float baseRateIn, string typeIn);

    float calcDailyRate();
};

Dog::Dog(string nameIn, float baseRateIn, string typeIn)
        : Animal(nameIn, baseRateIn, typeIn) {
    cout << "\nin dog constructor";
}

float Dog::calcDailyRate() {
    return Animal::getBaseRate() * 2.0;
}


int main() {
    Cat c1("polly", 20.0, "cat");
    Dog d1("spot", 30.0, "dog");

    cout << "\nPolly Rate: $" << c1.calcDailyRate();
    cout << "\nSpot Rate: $" << d1.calcDailyRate();

    return 0;
}
//
// Created by serdar on 20.09.2019.
//


#include <iostream>
#include <string>

using namespace std;

class Flower {
private:
    string bloomTime;
public:
    Flower();

    void setBloomTime(string bloomIn);

    string getBloomTime();
};

Flower::Flower() {
    bloomTime = "NA";
}

void Flower::setBloomTime(string bloomIn) {
    bloomTime = bloomIn;
}

string Flower::getBloomTime() {
    return bloomTime;
}

//TODO: Complete the class called Rose
//It is derived from the class Flower
class Rose : public Flower {
private:
    string fragrance;
public:
    Rose();

    void setFragrance(string fragIn);

    string getFragrance();
};

Rose::Rose() {
    fragrance = "NA";
}

void Rose::setFragrance(string fragIn) {
    fragrance = fragIn;
}

string Rose::getFragrance() {
    return fragrance;
}


int main_3() {
    Rose r1;
    r1.setBloomTime("spring");
    r1.setFragrance("strong");

    cout << "r1 blooms in " << r1.getBloomTime() << ", " << r1.getFragrance();
    return 0;
}
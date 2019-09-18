//
// Created by serdar on 18.09.2019.
//

#include <iostream>

using namespace std;

class Shape {
private:
    int length;     // Length of a box
    int width;

public:
    // Constructor definition
    Shape(int l = 2, int w = 2) {
        length = l;
        width = w;
    }

    double Area() {
        return length * width;
    }

    int operator+(Shape shapeIn) {
        return Area() + shapeIn.Area();
    }
    int operator+(int number) {
        return Area() + number;
    }
};

int main_8(void) {
    Shape sh1(4, 4);    // Declare shape1
    Shape sh2(2, 6);    // Declare shape2
    Shape sh3;
    int total = sh1 +  sh2;
    int sum = sh1+5;
    cout << "\nsh1.Area() = " << sh1.Area();
    cout << "\nsh2.Area() = " << sh2.Area();
    cout << "\nTotal = " << total;
    return 0;
}
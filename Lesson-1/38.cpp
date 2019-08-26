//
// Created by serdar on 26.08.2019.
//

#include <iostream>
#include <string>
#include <sstream> //stringstream

int main_38() {
    std::string stringLength;
    float inches = 0;
    float yardage = 0;

    std::cout << "Enter number of inches: ";
    std::getline(std::cin, stringLength); //read until newline
    std::stringstream(stringLength) >> inches; // turn string in to float number
    std::cout << "You entered " << inches << "\n";
    yardage = inches / 36;
    std::cout << "Yardage is " << yardage;
    return 0;
}
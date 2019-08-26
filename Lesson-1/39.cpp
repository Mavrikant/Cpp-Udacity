//
// Created by serdar on 26.08.2019.
//

//
// Created by serdar on 26.08.2019.
//

#include <iostream>
#include <string>
#include <sstream> //stringstream

int main_39() {
    std::string string;
    float length = 0;
    float width = 0;

    std::cout << "width: ";
    std::getline(std::cin, string); //read until newline
    std::stringstream(string) >> width; // turn string in to float number

    std::cout << "length: ";
    std::getline(std::cin, string); //read until newline
    std::stringstream(string) >> length; // turn string in to float number

    std::cout << "Areas " << length * width << "\n";
    return 0;
}
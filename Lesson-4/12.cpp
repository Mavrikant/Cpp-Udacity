//
// Created by serdar on 27.08.2019.
//

/*Goal: demonstrate use cases for the switch statement.*/

#include <iostream>

int main_12() {
    int menuItem = 1;

    std::cout << "What is your favorite winter sport?: \n";
    std::cout << "1.Skiing\n2: Sledding\n3: Sitting by the fire";
    std::cout << "\n4.Drinking hot chocolate\n";
    std::cout << "\n\n";

    switch (menuItem) {
        case (1):
            std::cout << "Skiing?! Sounds dangerous!\n";
            break;
        case (2):
            std::cout << "Sledding?! Sounds like work!\n";
            break;
        case (3):
            std::cout << "Sitting by the fire?! Sounds warm!\n";
            break;
        case (4):
            std::cout << "Hot chocolate?! Yum!\n";
            break;
        default:
            std::cout << "Enter a valid menu item";
    }

    char begin;
    std::cout << "\n\nWhere do you want to begin?\n";
    std::cout << "B. At the beginning?\n";
    std::cout << "M. At the middle?\n";
    std::cout << "E. At the end?\n\n";
    begin = 'M';

    switch (begin) {
        case ('B'):
            std::cout << "Once upon a time there was a wolf.\n";
        case ('M'):
            std::cout << "The wolf hurt his leg.\n";
        case ('E'):
            std::cout << "The wolf lived happily ever after\n";
    }
    return 0;
}
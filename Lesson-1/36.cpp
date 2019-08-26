//
// Created by serdar on 23.08.2019.
//

/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number.
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/

/*
Imogene Penelope Freely
2343 South View Road
(408)435-3221

Sandy Beaches
1123 Pebble Creek Road
(408)546-5432
*/

#include <iostream>
#include <string>

int main_36() {
    std::string name1;
    std::string adresss1;
    std::string phone_number1;

    std::string name2;
    std::string adresss2;
    std::string phone_number2;

    std::cout<<"Name?: ";
    std::getline(std::cin, name1);
    std::cout << "Adress?: ";
    std::getline(std::cin, adresss1);
    std::cout << "Phone number?: ";
    std::getline(std::cin, phone_number1);

    std::cout << "Name?: ";
    std::getline(std::cin, name2);
    std::cout << "Adress?: ";
    std::getline(std::cin, adresss2);
    std::cout << "Phone number?: ";
    std::getline(std::cin, phone_number2);

    std::cout << name1 << "\t\t" << adresss1 << "\t\t" << phone_number1 << "\n";
    std::cout << name2 << "\t\t" << adresss2 << "\t\t" << phone_number2 << "\n";




    return 0;
}
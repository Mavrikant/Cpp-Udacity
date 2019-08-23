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

int main(){
    std::string name;
    std::string adresss;
    std::string phone_number;

    std::cout<<"Name?: ";
    std::getline(std::cin, name);
    std::cout<<"Hello "<<name;


    return 0;
}
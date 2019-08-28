//
// Created by serdar on 27.08.2019.
//

/*Goal: understand the switch statement in C++
**This example does not use a break statement between
**the possibilities, which means all menu items below the selected
**one are executed.
*/


#include<iostream>

int main_13()
{
    char menuItem;
    std::cout<<"L: luxury package\nS: standard package\n";
    std::cout<<"B: basic package ";

    std::cout<<"\n\nChoose your holiday package:";
    std::cin>>menuItem;
    std::cout<<menuItem<<"\n";
    std::cout<<"The "<<menuItem<<" package includes:\n";

    switch(menuItem)
    {
        case 'L':
        {
            std::cout<<"\tSpa Day\n";
            std::cout<<"\tSailboat Tour\n";
        }
        case 'S':
        {
            std::cout<<"\tCity Tour\n";
            std::cout<<"\tComplimentary Happy Hour\n";
        }
        case 'B':
        {
            std::cout<<"\tAirport Transfers\n";
            std::cout<<"\tComplimentary Breakfast\n";
            break;
        }
        default:
            std::cout<<"Please select the L,S,B package.\n";
    }
    return 0;
}

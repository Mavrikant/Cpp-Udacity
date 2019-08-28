//
// Created by serdar on 27.08.2019.
//

/*Goal: learn if-else statements in C++
**The user guess in in the input.txt file
**Change the value to test each of the possible
**code branches.*/

#include<iostream>

int main_9()
{
    int TARGET = 33;
    int guess;
    std::cout<<"Guess a number between 0 - 100\n";
    std::cin>>guess;

    std::cout<<"You guessed: "<<guess<<"\n";


    if(guess < TARGET)
    {
        std::cout<<"Your guess is too low.\n";
    }
    else if(guess > TARGET)
    {
        std::cout<<"Your guess is too high.\n";
    }
    else
    {
        std::cout<<"Yay! You guessed correctly.\n";
    }


    return 0;
}
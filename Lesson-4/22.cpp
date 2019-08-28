//
// Created by serdar on 28.08.2019.
//
/*Goal: In the programming quiz, use a while loop to prompt
**the user to guess a target number.
**Tell the user if the guess is too high or too low.
**The user enters -1  or guesses the target number to end
**the program.
*/
#include <iostream>
#include<sstream>

int main_22()
{
    int target = 55;
    std::string userString;
    int guess = -1;

    while(guess != target )
    {
        std::cout<<"Guess a number between 0 and 100: ";
        std::cin>>guess;
        std::cout<<guess<<"\n";
        if(guess > target)
            std::cout<<"Your guess is too high\n";
        else if(guess < target)
            std::cout<<"Your guess is too low\n";
        else
            std::cout<<"You guessed the target!\n";

        //Note I had to use double quotes around "q"
        //because it is a string
        if(guess == -1)
        {
            std::cout<<"good bye!";
            break;
        }
    }
    return 0;
}
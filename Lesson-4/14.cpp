//
// Created by serdar on 27.08.2019.
//

/*Now I would like you to do a switch statement with breaks
**between the cases. Create a program that asks the user for
**two float numbers. Then asks the user if they would like to:
**add the numbers, subtract the numbers, multiply the numbers,
**divide the numbers.
**The program should then print the numbers with the chosen
**operation and the solution.
*/

#include <iostream>

int main_14()
{
    float in1, in2;
    float result;
    char op;
    std::cout<<"Enter two numbers:";
    std::cin>>in1;
    std::cin>>in2;
    std::cout<<"Enter the operation '+','-','*','/':";
    std::cin>>op;


    switch(op)
    {
        case '+':
        {
            result=in1+in2;
            break;
        }
        case '-':
        {
            result=in1-in2;
            break;
        }
        case '*':
        {
            result=in1*in2;
            break;
        }
        case '/':
        {
            result=in1/in2;
            break;
        }
        default:
            std::cout<<"Error\n";
    }
    std::cout<<in1<<' '<<op<<' '<<in2<<" = "<<result;
    return 0;
}
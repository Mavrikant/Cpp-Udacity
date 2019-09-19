//
// Created by serdar on 19.09.2019.
//

/*Goal: learn to use templates with multiple variable types.
*/

#include<iostream>
using namespace std;

template <typename T, typename U> //Altındaki fonsiyona özel. Fazla parametre kabul etmiyor.
T getBigger(T input1, U input2)
{
    if(input1 > input2)
        return input1;
    return input2;
}

int main_6()
{
    int a = 5;
    float b = 6.334;
    int bigger;
    cout<<"Between "<<a<<" and "<<b<<" "<<getBigger(a,b)<<" is bigger.\n";

    cout<<"Between "<<a<<" and "<<b<<" "<<getBigger(b,a)<<" is bigger.\n";
    return 0;
}


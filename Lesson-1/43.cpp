//
// Created by serdar on 26.08.2019.
//

/*The header file*/

#include<iostream>

using namespace std;

int main() {
    float FTemp = 0;
    float CTemp = 0;

    cout << "Enter a Fahrenheit temperature: ";
    cin >> FTemp;

    CTemp = FTemp - (float) 32 / ((float) 9 / 5);
    cout << "\n " << FTemp << " in Fahrenheit = " << CTemp << "in Celsius\n";
    return 0;
}
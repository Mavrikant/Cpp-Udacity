//
// Created by serdar on 26.08.2019.
//

/*Fix the errors and get an error free compilation and execution.*/

#include <iostream>
#include <cmath>


int main_14() {
    float coEff1, coEff2, constant;
    float Exp1, Exp2;
    float y;
    float x;
    //Calculate the value of y for a user defined three term polynomial
    //Get the coefficients, exponents, and the constants
    std::cout << "What is the first coefficient?";
    std::cin >> coEff1;
    std::cout << coEff1 << "\n";
    std::cout << "What is the exponent of the first term?";
    std::cin >> Exp1;
    std::cout << Exp1 << "\n";
    std::cout << "What is the second coefficient?";
    std::cin >> coEff2;
    std::cout << coEff2 << "\n";
    std::cout << "What is the exponent of the second term?";
    std::cin >> Exp2;
    std::cout << Exp2 << "\n";
    std::cout << "What is the constant?";
    std::cin >> constant;
    std::cout << constant << "\n";
    //Print the complete equation
    std::cout << "The polynomial we are solving is:\n";
    std::cout << "\t" << coEff1 << "*x^" << Exp1 << " + " << coEff2 << "*x^" << Exp2 << " + " << constant;
    std::cout << "\nWhat is the value of x?";
    std::cin >> x;
    std::cout << x << "\n";
    //Solve the equation with the given x
    y = coEff1 * std::pow(x, Exp1) + coEff2 * std::pow(x, Exp2) + constant;
    std::cout << "y = " << coEff1 << "*" << x << "^" << Exp1 << " + " << coEff2 << "*" << x << "^" << Exp2 << " + " << constant << " = " << (int)y;
    return 0;
}
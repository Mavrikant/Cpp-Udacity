//
// Created by serdar on 27.08.2019.
//

/*Goal: use logical and relational operators in a C++ program.
**Find all possible outputs for the given expression
**Hint: there are three inputs, so there are 8 possible input combinations (2^3)
**Which means there is an output for each combination of inputs.
**The expression: (A and B and C) or (A and( (not B) or (not C))) = Q
*/

#include<iostream>


int main_4() {
    int Q = 0;

    std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t(A&&(!B||!C))\tQ\n";

    for (int A = 0; A < 2; ++A) {
        for (int B = 0; B < 2; ++B) {
            for (int C = 0; C < 2; ++C) {
                Q = (A and B and C) or (A and ((not B) or (not C)));
                std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";

            }
        }
    }


    return 0;
}
//
// Created by serdar on 27.08.2019.
//

/*Goal: understand the logical operators supported by C++
*/

#include<iostream>
#include<string>

int main_3()
{
    int A = 5;
    int B = 4;
    int C = 5;
    int D = 0;

    std::string TorF[] = {"False", "True"};

    //The && operator
    std::cout<<"A == C is "<<TorF[A==C];
    std::cout<<"\n(B == D) is "<<TorF[B==D];
    std::cout<<"\n(B > D) is "<<TorF[B>D];
    //A true && false = false
    std::cout<<"\n\n(A ==C) && (B == D) is "<<TorF[(A ==C) && (B == D)];
    //A true and true = true
    std::cout<<"\n(A ==C) && (B > D) is "<<TorF[(A ==C) && (B > D)];

    //The || operator
    //A true || false = true
    std::cout<<"\n\n(A ==C) || (B == D) is "<<TorF[(A ==C) || (B == D)];
    //A true || true = true
    std::cout<<"\n(A ==C) || (B > D) is "<<TorF[(A ==C) || (B > D)];

    //The 'Not' operator
    std::cout<<"\n\nA < B is "<<TorF[A<B];
    std::cout<<"\n!(A < B) is "<<TorF[!(A<B)];

    std::cout<<"\n\nA == C is "<<TorF[A==C];
    std::cout<<"\n!(A == C) is "<<TorF[!(A==C)];

    return 0;
}
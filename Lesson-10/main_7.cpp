//
// Created by serdar on 19.09.2019.
//

#include <iostream>

using namespace std;

template<class T>
class Multiplier {
private:
    T M1;
    T M2;
    T Result;
public:
    Multiplier(){ //Value return etmiyor.

    }

    void setM1(T input) {
        M1 = input;
    }

    void setM2(T input) {
        M2 = input;
    }

    void setProduct() {
        Result=M1*M2;
    }

    void printEquation() {
        cout<<M1<<"*"<<M2<<"="<<Result<<endl;
    }
};


int main_7() {
    Multiplier<int> multi1;
    Multiplier<float> multi3;

    int input1 = 0, input2 = 0;
    cout<< "int a and b:";
    cin >> input1;
    cin >> input2;

    multi1.setM1(input1);
    multi1.setM2(input2);
    multi1.setProduct();
    multi1.printEquation();

    cout << "\n";
    float input3 = 0, input4 = 0;
    cout << "float a and b";
    cin >> input3;
    cin >> input4;
    multi3.setM1(input3);
    multi3.setM2(input4);
    multi3.setProduct();
    multi3.printEquation();
    return 0;
}

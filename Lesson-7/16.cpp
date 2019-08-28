
#include<iostream>

void increment(int &input) {
    (input)++;
    std::cout << "In the function call a = " << input << "\n";
}

int main_16() {
    int a = 34;
    std::cout << "Before the function call a = " << a << "\n";
    increment(a);
    std::cout << "After the function call a = " << a << "\n";
    return 0;
}


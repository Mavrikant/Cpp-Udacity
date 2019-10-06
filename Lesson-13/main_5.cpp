//
// Created by serdar on 6.10.2019.
//

// Goal: pracitce constructing vectors
// and their iterators
// Call the vector vFloat
// Call the iterator it

// constructing vectors
#include <iostream>
#include <vector>

void printVector(std::vector<float> vIn) {//printing the contents of vIns
    //TODO: Complete the function
    std::vector<float>::iterator it;
    for (it = vIn.begin(); it < vIn.end(); ++it) {
        std::cout << *it<<std::endl;
    }
}

int main_5() {
    //TODO: create a vector of floats
    std::vector<float> vFloat;

    std::cout << "vFloat has " << vFloat.size() << " elements\n";

    std::cout << "\n\nAdding 10 elements to the vector\n";
    //TODO: assign the value 8.8 to 10 elements of the vector
    vFloat.assign(10, 8.8);
    std::cout << "vFloat has " << vFloat.size() << " elements\n";


    //TODO: Complete the Print function in main.hpp
    // Call the function here to print out each element of vFloat
    printVector(vFloat);

    return 0;
}


//
// Created by serdar on 6.10.2019.
//

/*Create a vector of floats called vFloat.
* vFloat should have an iterator.
*/

//TODO: include the necessary libraries
#include <iostream>
#include <vector>

int main_2() {
    //TODO: instantiate vFloat vector
    std::vector<float> vFloat;
    std::cout << "vFloat has " << vFloat.size() << " elements\n";

    //TODO: Change the size of vFloat to 10 elements
    vFloat.resize(10);
    std::cout << "\n\n vFloat now has " << vFloat.size() << " elements\n";

    return 0;
}

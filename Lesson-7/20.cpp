//
// Created by serdar on 28.08.2019.
//

/*Goal: create a function that searches an array for
**a given value.
*/

#include<iostream>

int search(int array[], int size, int searchKey);

int main_20() {
    const int size = 4;
    int array[] = {345, 75896, 2, 543};
    int searchKey = 2;
    std::cout << "Found at: " << search(array, size, searchKey);
    return 0;
}

int search(const int array[], int size, int searchKey) {
    int found = -1;
    for (int i = 0; i < size; i++) {
        if (array[i] == searchKey) {
            found = i;
            break;
        }
    }
    return found;
}
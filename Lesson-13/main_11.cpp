//
// Created by serdar on 6.10.2019.
//

// Goal: pracitce constructing vectors
// and their iterators
// Call the vector vFloat
// Call the iterator it


// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> vIn) {//printing the contents of vIns
    //TODO: Finish the function
    vector<int>::iterator it;
    for (it = vIn.begin(); it < vIn.end(); ++it) {
        cout << *it << " ";
    }
}

void assignFunction(vector<int> vInts, int in) {
    cout << "\nassigning " << in << " and printing the vector\n";
    //TODO: Finish the function
    vInts.assign(1,in);
    printVector(vInts);
}

void pushBackFunction(vector<int> vInts, int in) {
    cout << "\npush back " << in << " and printing the vector\n";
    //TODO: Finish the function
    vInts.push_back(in);
    printVector(vInts);
}

void emplaceFunction(vector<int> vInts, int loc, int in) {
    cout << "\nemplacing " << in << " and printing the vector\n";
    //TODO: Finish the function
    vector<int>::iterator it;
    it  = vInts.begin() + loc;
    vInts.emplace(it, in);
    printVector(vInts);
}

int main_11() {
    vector<int> vInts;
    vInts.assign(10, 5);
    printVector(vInts);
    assignFunction(vInts, 1);
    pushBackFunction(vInts, 2);
    emplaceFunction(vInts, 1, 3);

    return 0;
}


//
// Created by serdar on 6.10.2019.
//

// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>


int main_8 ()
{
    //creating a vector of integers
    std::vector<int> vectorInts;
    //creating an iterator for the vector
    std::vector<int>::iterator it;

    std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";

    std::cout<<"Adding 23 to the vector\n";
    vectorInts.assign(1,23);
    for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout<<*it<<" ";


    std::cout<<"\n\nAdding four elements to the vector\n";
    vectorInts.push_back(24);
    vectorInts.push_back(25);
    vectorInts.push_back(26);
    vectorInts.push_back(27);
    std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";

    //printing the contents of vectorInts
    std::cout<<"VectorInts has these elements:\n";
    for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout<<*it<<" ";

    return 0;
}


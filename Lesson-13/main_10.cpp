//
// Created by serdar on 6.10.2019.
//

// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>


int main_10 ()
{
    //creating a vector of integers
    std::vector<int> vectorInts;
    //creating an iterator for the vector
    std::vector<int>::iterator it;

    vectorInts.push_back(0);
    vectorInts.push_back(1);
    vectorInts.push_back(2);
    vectorInts.push_back(3);
    vectorInts.push_back(4);
    vectorInts.push_back(5);
    vectorInts.push_back(6);
    vectorInts.push_back(7);

    std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";

    //printing the contents of vectorInts
    std::cout<<"VectorInts has these elements:\n";
    for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout<<*it<<" ";

    //insert an element after the first element
    it  = vectorInts.begin();
    vectorInts.emplace(it, -1);
    std::cout<<"\n\nAfter the insert\n";
    for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout<<*it<<" ";

    //insert an element after the third element
    it  = vectorInts.begin();
    vectorInts.emplace(it + 3, -2);
    std::cout<<"\n\nAfter the insert\n";
    for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout<<*it<<" ";

    //insert an element after the third element
    it  = vectorInts.begin();
    vectorInts.emplace(it + 5, -3);
    std::cout<<"\n\nAfter the insert\n";
    for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout<<*it<<" ";

    return 0;
}


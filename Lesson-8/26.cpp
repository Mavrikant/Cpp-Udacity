//
// Created by serdar on 29.08.2019.
//

#include <iostream>

using namespace std;

class Shape {
public:
    // Constructor definition
    Shape(int l = 2, int w = 2)
    {
        length = l;
        width = w;
    }

    double Area()
    {
        return length * width;
    }

    //Use 'this' to compare areas
    int compareWithThis(Shape shape)
    {
        return this->Area() > shape.Area();
    }

    //'this' is not necessary to compare shapes
    int compare(Shape shapeIn)
    {
        return Area() > shapeIn.Area();
    }

private:
    int length;     // Length of a box
    int width;
};

int main_26(void)
{
    Shape sh1(4, 4);    // Declare shape1
    Shape sh2(2, 6);    // Declare shape2

    if(sh1.compare(sh2))
    {
        cout << "\nShape2 is smaller than Shape1" <<endl;
    }
    else
    {
        cout << "\nShape2 is equal to or larger than Shape1" <<endl;
    }

    if(sh1.compareWithThis(sh2)) {
        cout << "\nShape2 is smaller than Shape1" <<endl;
    }
    else
    {
        cout << "Shape2 is equal to or larger than Shape1" <<endl;
    }

    return 0;
}
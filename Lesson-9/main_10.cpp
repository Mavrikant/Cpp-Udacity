//
// Created by serdar on 18.09.2019.
//
/*
Overloadable/Non-overloadableOperators
        Following is the list of operators which can be overloaded −

+	-	*	/	%	^
&	|	~	!	,	=
<	>	<=	>=	++	--
<<	>>	==	!=	&&	||
+=	-=	/=	%=	^=	&=
|=	*=	<<=	>>=	[]	()
->	->*	new	new []	delete	delete []
Following is the list of operators, which can not be overloaded −

::	.*	.	?:

*/


#include <iostream>

using namespace std;

class Shape
{
private:
    int length;     // Length of a box
    int width;

public:
    // Constructor definition
    Shape(int l = 2, int w = 2)
    {
        length = l;
        width = w;
    }

    int getWidth()
    {
        return width;
    }

    int getLength()
    {
        return length;
    }

    double Area()
    {
        return length * width;
    }

    int operator *(Shape shapeIn)
    {
        return ((width + shapeIn.getWidth())*(length + shapeIn.getLength()));
    }
};


int main(void)
{
    Shape sh1(4, 4);    // Declare shape1
    Shape sh2(2, 6);    // Declare shape2

    int total = sh1 * sh2;
    cout << "\nsh1.Area() = " << sh1.Area();
    cout << "\nsh2.Area() = " << sh2.Area();
    cout << "\nTotal = "<<total;
    return 0;
}

#include<iostream>

//C++ allows us to 'overload' the same function name as long as
//the variable types in the function inputs are different.

class Compare
{
public:
    int findSmaller(int input1, int input2);
    float findSmaller(float input1, float input2);
    char findSmaller(char input1, char input2);

    int findSmaller(int input1, int input2, int input3);
    float findSmaller(float input1, float input2, float input3);
    char findSmaller(char input1, char input2, char input3);

    int findSmaller(int arrayIn[], int size);
    float findSmaller(float arrayIn[], int size);
    char findSmaller(char arrayIn[], int size);
};

int Compare::findSmaller(int input1, int input2)
{
    if(input1<input2)
        return input1;
    return input2;
}
float Compare::findSmaller(float input1, float input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

char Compare::findSmaller(char input1, char input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

int Compare::findSmaller(int input1, int input2, int input3)
{
    if(input1 < input2)
    {
        if(input1 < input3)
            return input1;
        else
            return input3;
    }
    else
    {
        if(input2 < input3)
            return input2;
        else
            return input3;
    }
}

float Compare::findSmaller(float input1, float input2, float input3)
{
    if(input1 < input2)
    {
        if(input1 < input3)
            return input1;
        else
            return input3;
    }
    else
    {
        if(input2 < input3)
            return input2;
        else
            return input3;
    }
}

char Compare::findSmaller(char input1, char input2, char input3)
{
    if(input1 < input2)
    {
        if(input1 < input3)
            return input1;
        else
            return input3;
    }
    else
    {
        if(input2 < input3)
            return input2;
        else
            return input3;
    }
}

int Compare::findSmaller(int arrayIn[], int size)
{
    {
        for (int i = 0; i < size; ++i)
            for (int j = 0; j < size - i - 1; ++j)
                if (arrayIn[j] > arrayIn[j + 1])
                {
                    int temp = arrayIn[j];
                    arrayIn[j] = arrayIn[j + 1];
                    arrayIn[j + 1] = temp;
                }
    }
    return arrayIn[0];
}

float Compare::findSmaller(float arrayIn[], int size)
{
    {
        for (int i = 0; i < size; ++i)
            for (int j = 0; j < size - i - 1; ++j)
                if (arrayIn[j] > arrayIn[j + 1])
                {
                    float temp = arrayIn[j];
                    arrayIn[j] = arrayIn[j + 1];
                    arrayIn[j + 1] = temp;
                }
    }
    return arrayIn[0];
}

char Compare::findSmaller(char arrayIn[], int size)
{
    {
        for (int i = 0; i < size; ++i)
            for (int j = 0; j < size - i - 1; ++j)
                if (arrayIn[j] > arrayIn[j + 1])
                {
                    int temp = arrayIn[j];
                    arrayIn[j] = arrayIn[j + 1];
                    arrayIn[j + 1] = temp;
                }
    }
    return arrayIn[0];
}

int main_4()
{
    Compare c;
    int a = 5;
    int b = 4;
    int d = 6;
    float f1 = 5.43;
    float f2 = 6.32;
    float f3 = 99.43;
    char c1 = 'c';
    char c2 = 'z';
    char c3 = 'm';
    int arrayInt[5] = {65,43,2,898,678};
    float arrayInF[4] = {4.5,4.9,4.3,6.5};
    char arrayInC[6] = {'c','z','t','h','e','r'};
    std::cout<<c.findSmaller(a,b)<<" is the smaller of "<<a<<" and "<<b<<"\n";
    std::cout<<c.findSmaller(f1,f2)<<" is the smaller of "<<f1<<" and "<<f2<<"\n";
    std::cout<<c.findSmaller(c1,c2)<<" is the smaller of "<<c1<<" and "<<c2<<"\n\n";

    std::cout<<c.findSmaller(a,b,d)<<" is the smallest of "<<a<<", "<<b<<", "<<d<<"\n";
    std::cout<<c.findSmaller(f1,f2,f3)<<" is the smallest of "<<f1<<", "<<f2<<", "<<f3<<"\n";
    std::cout<<c.findSmaller(c1,c2,c3)<<" is the smallest of "<<c1<<", "<<c2<<", "<<c3<<"\n\n";

    std::cout<<c.findSmaller(arrayInt, 5)<<" is the smallest of the input array\n";
    std::cout<<c.findSmaller(arrayInF, 4)<<" is the smallest of the input array\n";
    std::cout<<c.findSmaller(arrayInC, 6)<<" is the smallest of the input array\n";


    return 0;
}



/*header file for main.cpp*/
#include<iostream>
using namespace std;

class Student
{
    int grade[5];
    int id;
public:
    Student();
    void setId(int idin);
    void setGrade(int index, int gradeIn);
    int getId();
    int getGrade(int index);
    float getAvg();
    void printInfo();
};

Student::Student()
{
    for(int i=0;i<5;i++)
    {
        grade[i] = 0;
    }
    id = 0;
}

void Student::setId(int idin)
{
    id = idin;
}
void Student::setGrade(int index, int gradeIn)
{
    grade[index] = gradeIn;
}
int  Student::getId()
{
    return id;
}
int  Student::getGrade(int index)
{
    return grade[index];
}
float  Student::getAvg()
{
    int sum = 0;
    for(int i=0; i<5;i++)
        sum = sum + grade[i];
    return sum/5.0;
}
void Student::printInfo()
{
    cout<<id<<"\n";
    for(int i=0; i<5;i++)
        cout<<grade[i]<<" ";
}


int main_18()
{
    Student s1;
    s1.setId(3232);
    s1.setGrade(0,85);
    s1.setGrade(1, 80);
    s1.setGrade(2,98);
    s1.setGrade(3,65);
    s1.setGrade(4,90);
    s1.printInfo();
    cout<<"avg = "<<s1.getAvg();
    return 0;
}
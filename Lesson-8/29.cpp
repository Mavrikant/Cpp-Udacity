
#include<iostream>
#include<string>
using namespace std;

class Patient
{
private:
    string name;
public:
    //The constructor accepts a name parameter
    Patient(string input);
    void setName(string input);
    string getName();
};

Patient::Patient(string input)
{
    //when an object is created
    //the name must be added as a parameter
    name = input;
}

void Patient::setName(string input)
{
    name = input;
}

string Patient::getName()
{
    return name;
}
int main_29()
{
    //an instance of Patient is
    //instanciated with a name
    Patient p1("Tammy Smith");
    cout<<p1.getName();
    return 0;
}
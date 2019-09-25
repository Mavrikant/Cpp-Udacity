//
// Created by Serdar on 25.09.2019.
//

/* header file for main.cpp
*/

#include<iostream>
#include<string>

using namespace std;

//Employee is a class for calculating the
//pay for an hourly employee.
class Employee {
private:
    float payRate;
    string name="";
    int employeeNumber=0;
public:
    void setPayRate(float rateIn);

    float getPayRate();

    // This is now a virtual function
    // A virtual function is a member function that you expect to be redefined in derived classes.
    // When you refer to a derived class object using a pointer or a reference to the base class,
    // you can call a virtual function for that object and execute the derived class's version of the function.
    virtual float calcWeeklyPay();
};

void Employee::setPayRate(float rateIn) {
    payRate = rateIn;
}

float Employee::getPayRate() {
    return payRate;
}

float Employee::calcWeeklyPay() {
    return 40 * payRate;
}

//The class manager inherits from Employee
//The only difference... managers are salary
//employees. So the pay is calculated differently.
class Manager : public Employee {
private:
    int test = 0;
public:
    float calcWeeklyPay();
};

float Manager::calcWeeklyPay() {
    //weekly pay is based on the yearly salary
    //divided by 52 weeks
    return Employee::getPayRate() / 52;
}

int main_() {
    const string status = "salary"; //options: hourly or salary
    string level;
    level = "salary";
    Employee *e1; //e1 is now a pointer to Employee object

    if (status != level) {
        e1 = new Employee();
    } else {
        e1 = new Manager();
    }

    e1->setPayRate(12000.00);
    cout << "It works!\n";
    cout << "e1 pay: $" << e1->calcWeeklyPay();
    delete e1;
    return 0;
}
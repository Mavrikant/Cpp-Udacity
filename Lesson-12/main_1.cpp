#include<iostream>
#include<string>

using namespace std;

//Employee is a class for calculating the
//pay for an hourly employee.
class Employee {
private:
    float payRate;
    string name;
    int employeeNumber;
public:
    void setPayRate(float rateIn);

    float getPayRate();

    float calcWeeklyPay();
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
public:
    float calcWeeklyPay();
};

float Manager::calcWeeklyPay() {
    //weekly pay is based on the yearly salary
    //divided by 52 weeks
    return Employee::getPayRate() / 52;
}

int main_1() {
    Employee e1;
    e1.setPayRate(10.00);
    Manager m1;
    m1.setPayRate(12000.00);
    cout << "e1 pay: $" << e1.calcWeeklyPay();
    cout << "\nm1 pay: $" << m1.calcWeeklyPay();

    return 0;
}
/*Enum example*/

#include <iostream>

using namespace std;

int main_23()
{
    //define MONTHS as having 12 possible values
    enum MONTHS {Jan, Feb, Mar, Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};

    //define bestMonth as a variable type MONTHS
    MONTHS bestMonth;

    //assign bestMonth one of the values of MONTHS
    bestMonth = Jan;

    //now we can check the value of bestMonths just
    //like any other variable
    if(bestMonth == Jan)
    {
        cout<<"I'm not so sure January is the best month\n";
    }
    return 0;
}
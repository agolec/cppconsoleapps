// 7. Pennies for Pay.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;


int main()
{
    const int MINIMUM_DAYS_WORKED = 1;
    const int MAXIMUM_DAYS_WORKED = 999;
    const double PENNY_VALUE = 0.01;
    

    int daysWorked = 0;
    double dollars;
    bool isValid = false;

    while (!isValid) {
        cout << "How many days did you work: " << endl;
        cin >> daysWorked;

        while (cin.fail()) {
            cout << "ERROR: you must enter a numeric input for days worked: ";
            cin.clear();
            cin >> daysWorked;
        }
        if (daysWorked < MINIMUM_DAYS_WORKED && daysWorked > MAXIMUM_DAYS_WORKED) {
            cout << "ERROR: days worked must be over 0 and less than 999" << endl;
        }
        else {
            isValid = true;
        }
    }
        cout << "====Pennies for Pay table====" << endl;
        cout << "Day|" << setw(10) << "Pay" << setw(10) << "|" << endl;
        
        double currentPay = PENNY_VALUE;
        
        for (int i = 0; i < daysWorked; i++) {
            ostringstream money;
            dollars = currentPay;
            money << fixed << setprecision(2) << "$" << currentPay;
            cout << right << setw(3) << (i+1) << "|" << setw(15) << money.str()  <<" |" << endl;
            currentPay *= 2;
        }
}
    

/*
        START
        DISPLAY "How many days did you work?"
        GET the number of days worked
        DISPLAY table heading
        FOR each day worked:
            Display the day
            Display the pay
            multiply pay by 2
            increment day
        END FOR

        END
*/
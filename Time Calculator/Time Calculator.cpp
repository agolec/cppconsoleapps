// Time Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <iostream>
using namespace std;
int main()
{
    const int SECONDS_IN_A_YEAR = 31536000;
    const int SECONDS_IN_A_DAY = 86400;
    const int SECONDS_IN_A_HOUR = 3600;
    const int SECONDS_IN_A_MINUTE = 60;

    int years, days, hours, minutes = 0;

    int totalSecondsInput = -1;
    int input = 0;
   
    std::cout << "~~~~~~~Time Calculator~~~~~~~~" << endl;
   
    do {
        cout << "Enter an integer and I'll tell you how many years, days, minutes, hours that is." << endl;
        cout << "Enter 0 to quit" << endl;
        cout << ": ";
        cin >> input;

        totalSecondsInput = input;

        years = totalSecondsInput / SECONDS_IN_A_YEAR;
        totalSecondsInput %= SECONDS_IN_A_YEAR;

        days = totalSecondsInput / SECONDS_IN_A_DAY;
        totalSecondsInput %= SECONDS_IN_A_DAY;

        hours = totalSecondsInput / SECONDS_IN_A_HOUR;
        totalSecondsInput %= SECONDS_IN_A_HOUR;

        minutes = totalSecondsInput / SECONDS_IN_A_MINUTE;
        totalSecondsInput %= SECONDS_IN_A_MINUTE;

        int seconds = totalSecondsInput;

        cout << "years: " << years << endl;
        cout << "days: " << days << endl;
        cout << "hours: " << hours << endl;
        cout << "minutes: " << minutes << endl;
        cout << "seconds: " << seconds << endl;
    } while (input != 0);
        
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

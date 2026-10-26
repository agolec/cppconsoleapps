// Miles Per Gallon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Miles Per Gallon.h"

using namespace std;

int main()
{
    float miles;
    float gallons;
    string errorMessage = "unable to parse number from input.";
    string gallonsPrompt = "Entr the number of gallons your car holds: ";
    string milesPrompt = "How many miles have you driven?";
    

    getNumber(gallons,errorMessage,gallonsPrompt);
    getNumber(miles,errorMessage,milesPrompt);
    
    cout << "Miles driven: " << miles << endl;
    cout << "Gallons car holds: " << gallons << endl;
    double mpg = miles / gallons;
    cout << "Your car gets " << mpg << " miles to the gallon." << endl;

}

void getNumber(float& number,const string errorMessage, const string prompt)
{
    cout << prompt;
    cin >> number;
    while (cin.fail()) {
        cout << errorMessage;
        cin.clear();
        cin.ignore();
        cout << prompt;
        cin >> number;
    }
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

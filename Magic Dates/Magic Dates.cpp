// Magic Dates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input = "";
    int day, month, year;
    const bool QUIT = false;
    
    cout << "Enter a date in DD MM YY format and I'll let you know if it's magic" << endl;
    cin >> day >> month >> year;
    while (cin.fail()) {
        cout << "bad input encountered." << "\a" << endl;
        cin.clear();
        cin.ignore();
        cout << "Enter a data in DD MM YY format and I will tell you if it is a magic date." << endl;
        cin >> day >> month >> year;

    }

    if ((day * month) == year) {
        cout << "Date is magic\n";
    }
    else {
        cout << "Date is not magic RIP." << endl;
    }
    cin.get();
    
    
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

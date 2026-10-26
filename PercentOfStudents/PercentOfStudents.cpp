// PercentOfStudents.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int maleStudents;
    int femaleStudents;
    double percentageMaleStudents;
    double percentageFemaleStudents;
    int totalStudents;
    const float ONE_HUNDRED_PERCENT = 100.0;

    cout << "How many males are in your class: ";
    cin >> maleStudents;
    cin.ignore();
    
    cout << "How many female students are there: ";
    cin >> femaleStudents;
    cin.ignore();

    totalStudents = maleStudents + femaleStudents;
    // cast for these to properly divide.
    percentageFemaleStudents = static_cast<double>(femaleStudents) / totalStudents;
    percentageMaleStudents = static_cast<double>(maleStudents) / totalStudents;

    cout << "Here are your stats: " << endl;

    cout << "Total Students : " << totalStudents << endl;
    cout << "Percent Male: " << percentageMaleStudents * ONE_HUNDRED_PERCENT << "%" << endl;
    cout << "Percentage Female: " << percentageFemaleStudents * ONE_HUNDRED_PERCENT << "%" << endl;
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

// Minimum and Maximum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

int main()
{
    int numberOne;
    int numberTwo;
    std::vector<std::string> text = { " is greater than ", " is less than "," is equal to "};
    std::cout << "Enter two numbers separated by space and we'll figure out relationships" <<
        " between them" << std::endl;

    std::cin >> numberOne >> numberTwo;
    
    if (numberOne > numberTwo) {
        std::cout << numberOne << text[0] << numberTwo << std::endl;
    }
    else if (numberOne < numberTwo) {
        std::cout << numberOne << text[1] << numberTwo << std::endl;
    }
    else {
        std::cout << numberOne << text[2] << numberTwo << std::endl;
    }

    return 0;
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

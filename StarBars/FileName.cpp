// SalesBarChart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    const int TOTAL_NUMBER_OF_STORES = 5;
    int salesNumbers[TOTAL_NUMBER_OF_STORES] = { 0,0,0,0,0 };

    for (int i = 0; i < TOTAL_NUMBER_OF_STORES;) {
        int storeNum = i + 1;
        int dailySale = -1;
        std::string saleInput;
        std::cout << "Enter the sales for store " << storeNum << ": ";
        std::cin >> saleInput;
        try {
            dailySale = std::stoi(saleInput);
        }
        catch (const std::invalid_argument& e) {
            std::cerr << "Invalid argument: conversion of sales data could not be performed. (" << e.what() << ")\n";
            continue;
        }

        if (dailySale < 0) {
            std::cerr << "Input must be 0 or higher for sales data.\n";
            continue;
        }
        else {
            salesNumbers[i] = dailySale;
            i++;
        }
    }

    std::cout << "Sales Bar Chart" << std::endl;
    std::cout << "Each * = $100" << std::endl;

    for (int i = 0; i < TOTAL_NUMBER_OF_STORES; i++) {
        int storeNum = i + 1;
        
        std::cout << "Store " << storeNum << ": ";
        int currentSaleNum = salesNumbers[i];
        
        int numberOfStars = currentSaleNum / 100;
        for (int starCount = 0; starCount < numberOfStars; starCount++) {
            std::cout << "*";
       }
        std::cout << "\n";
    }
    std::cin.get();
    

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


/*
Program: Asks user for store sales 5x

For each store
    output prompt to enter sales.
    Gather sale number from user;
    If number is negative
        gather new sale number for the current store in iteration.
Output title
Output explanation
Output store number, then sale star representation

exit

*/
// Population Bar Chart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;

void writeFile();
void readFile(int, int);
void printCurrentDirectory();

int main()
{
    const int POPULATION_SCALE = 100000;
    const int START_YEAR = 1900;
    printCurrentDirectory();
    //writeFile();
    readFile(POPULATION_SCALE,START_YEAR);
    
    return 0;
}

void writeFile() {
    ofstream outputFile;
    outputFile.open("population.txt");

    cout << "Writing data to file.";

    //write the population info to the file.

    outputFile << 285704 << "\n";
    outputFile << 993678 << "\n";
    outputFile << 1623452 << "\n";
    outputFile << 1670144 << "\n";
    outputFile << 1203336 << "\n";
    outputFile << 951270 << "\n";
    outputFile << 639111 << "\n";

    outputFile.close();
    cout << "Done.\n";
}

void readFile(int populationScale,int startYear) {
    int chartYear = startYear;
    int number;
    ifstream inputFile;
    inputFile.open("population.txt");

    if (!inputFile.is_open()) {
        cerr << "error opening file.\n";
        //return;
    }
    cout << "=== DETROIT POPULATION ===" << std::endl;
    cout << "Each * = " << populationScale << " people." << std::endl;
    while (inputFile >> number) {
        int stars = number / populationScale;
        cout << chartYear << ": ";
        for (int i = 0; i < stars; i++) {
            cout << "*";
        }
        cout << std::endl;
        chartYear += 20;
    }
}
void printCurrentDirectory() {
    std::cout << "Current directory: " << std::filesystem::current_path()
        << '\n';
}


/*
Read in file numbers
generate graph title
for each number in file, generate bars, where each * symbol equals 1,000 */

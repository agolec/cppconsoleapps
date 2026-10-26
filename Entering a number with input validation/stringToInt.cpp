#include <iostream>
#include <string>

using namespace std;

int main() {
	int userNumber;

	cout << "Enter a number please: ";
	cin >> userNumber;
	while (cin.fail()) {
		cout << "error. cin.fail(): " << cin.fail() << endl;
		//system("pause");
		cout << "Error: conversion into numeric type failed." << endl;
		cout << "Re-enter a string: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> userNumber;
	}
	cout << "User number is: " << userNumber << "." << endl;
}
// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <iostream>
#include <iomanip>

int main() {
	int choice;
	int months;

	double charges;

	const double ADULT = 40.0,
		SENIOR = 30.0,
		CHILD = 20.0;

	//constants for menu choices
	const int ADULT_TICKET = 1,
		SENIOR_TICKET = 2,
		CHILD_TICKET = 3,
		QUIT = 4;

	std::cout << "\t\tHEALTH CLUB MEMBERSHIP\n\n";
	std::cout << "1. Adult membership\n\n";
	std::cout << "2. Senior Membership\n\n";
	std::cout << "3. Child membership\n\n";
	std::cout << "4. Quit Program"\n\n;
	std::cout << "Enter your choice: ";
	std::cin >> choice;

	if (choice == QUIT) {
		std::cout << "Quitting program\n";
		return 67;
	}
	else if (choice == ADULT_TICKET) {
		std::cout << "for how many months? ";
		std::cin >> months;
		charges = ADULT * months;
		std::cout << "your charges are: $" << charges << ".";
	}
	else if (choice == SENIOR_TICKET) {
		std::cout << "for how many months? ";
		std::cin >> months;
		charges = SENIOR * months;
		std::cout << "your charges are: $" << charges << ".";
	}
	else if (choice == CHILD_TICKET) {
		std::cout << "for how many months? ";
		std::cin >> months;
		charges = CHILD * months;
		std::cout << "your charges are: $" << charges << ".";
	}

	else {
		std::cout << "invalid choice";
	}
	return 0;

}
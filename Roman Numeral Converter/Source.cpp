#include <iostream>
#include <string>
#include <optional>

std::string gatherInput();
bool isInputNumeric(std::string stringInput);
bool isInputInRange(int);
std::string convertToNumeral(int stringnum);

int main() {
	/*
		Write a program that asks the user to enter a number
		from 1 to 10. Use a switch statement to display a roman
		numeral of the number they entered.
	*/
	const int SMALLEST_NUMBER = 1;
	const int LARGEST_NUMBER = 10;
	std::string input = "";
	int numericRepresentation = -1;
	do {
		do {
			std::cout << "Enter a number from " << SMALLEST_NUMBER <<
				" to " << LARGEST_NUMBER << ": " << std::endl;
			input = gatherInput();
		} while (isInputNumeric(input) == false);
		numericRepresentation = std::stoi(input);
	} while (isInputInRange(numericRepresentation)== false);

	std::string numeral = convertToNumeral(numericRepresentation);
	std::cout << numeral;
	return 0;
}
bool isInputNumeric(std::string input) {
	try {
		int number = std::stoi(input);
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
		return false;
	}
	return true;
}

std::string gatherInput() {
	std::string input;
	std::cin >> input;
	return input;
}

bool isInputInRange(int number) {
	if (number <= 10 && number >= 1) {
		return true;
	}
	return false;
}
std::string convertToNumeral(int number) {
	switch(number){
	case 1: return "I";
	case 2: return "II";
	case 3: return "III";
	case 4: return "IV";
	case 5: return "V";
	case 6: return "VI";
	case 7: return "VII";
	case 8: return "VIII";
	case 9: return "IX";
	case 10: return "X";
	}
}
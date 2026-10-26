#include <iostream>
#include <string>

using namespace std;

bool isStringNumeric(std::string input) {
	int integer;
	try {
		integer = std::stoi(input);
		return true;
	}
	catch (const exception e) {
		std::cout << e.what();
		return false;
	}
}
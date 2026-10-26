#include <iostream>
#include <string>

using namespace std;

float calcPay(float hours, float rate);

int main() {

	float pay = 0;
	float hoursWorked = 0;
	const float HOURLY_RATE = 7.00;

	string input;
	bool parsedNumber = false;
	bool isPositive = false;
	do {
		do {
			cout << "Enter hours worked please: ";
			cin >> input;

			try {
				hoursWorked = std::stoi(input);
				parsedNumber = true;
			}
			catch (const exception& e) {
				cout << e.what();
				cout << "\nLeft exception.\n";
			}
		} while (parsedNumber == false);
		if (hoursWorked > 0 ? isPositive = true : isPositive = false);
		if (!isPositive) {
			cout << "Error. Enter a positive number for hours worked." << endl;
			break;
		}
	}
	while (!isPositive);

	pay = calcPay(hoursWorked, HOURLY_RATE);

	cout << "total pay is: $" << pay << endl;
	

	return 0;
}
float calcPay(float hoursWorked, float rate) {
	const float OVERTIME_RATE = 1.5;
	const int FULL_TIME_HOURS = 40;
	if (hoursWorked <= FULL_TIME_HOURS) {
		return hoursWorked * rate;
	}
	else {
		float HoursOverFullTime = hoursWorked - FULL_TIME_HOURS;
		cout << "hours over" << HoursOverFullTime << endl;
		float regularPay = FULL_TIME_HOURS * rate;
		cout << "reg pay" << regularPay << endl;
		float overtimePay = HoursOverFullTime * (rate * OVERTIME_RATE);
		cout << "ot pay: " << overtimePay << endl;
		return regularPay + overtimePay;
	}
}
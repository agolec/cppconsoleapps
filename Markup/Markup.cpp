#include <iostream>
#include <iomanip>

using namespace std;

float calculateRetailPrice(float wholesale, float markupPercentage);

int main() {

	float wholesaleCost, percentMarkup = 0.0;

	cout << "What is the wholesale price and percentage markup of your item.\n";
	cout << "Enter these numbers on the same line with a space: " << endl;

	cin >> wholesaleCost >> percentMarkup;

	while (cin.fail()) {
		cout << "bad input received.";
		cin.ignore(1,'\n');

		cout << "What is the wholesale price and percentage markup of your item.\n";
		cout << "Enter these numbers on the same line with a space: " << endl;

		cin >> wholesaleCost >> percentMarkup;
	}
	float retail = calculateRetailPrice(wholesaleCost, percentMarkup);
	
	cout << "Your information is as follows: " << endl;
	cout << "Wholesale cost: $" << fixed << setprecision(2) << wholesaleCost << endl;
	cout << "Percent Markup: " << fixed << setprecision(2) << percentMarkup << "%" << endl;
	cout << "Retail price: $" << fixed << setprecision(2) << retail << endl;

	return 0;
}

float calculateRetailPrice(float wholesaleCost, float percentMarkup) {
	const float ONE_HUNDRED_PERCENT = 100.0;
	return wholesaleCost + (wholesaleCost * percentMarkup / ONE_HUNDRED_PERCENT);
}
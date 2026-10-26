/*
	Sales Prediction:

	The East Coast sales division of a company generates 58 percent of total sales.

	Based on that percentage, write a program that will predict how much the 

	East Coast division will generate if the company has $8.6 million dollars in sales this year.
*/

#include <iostream>

#include <string>
#include <iomanip>

using namespace std;

int main() {
	const float ANNUAL_SALES_2026 = 8600000;
	const float	EAST_COAST_SALES_PERCENT = .58;

	double eastCoastSales = ANNUAL_SALES_2026 * EAST_COAST_SALES_PERCENT;
	cout << fixed << setprecision(2);
	cout << "East coast division sales this year projected to be:  $" << eastCoastSales << endl;
}
// Box Office.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
    A movie theater only keeps a percentage of the revenue that is earned from ticket sales.

    The remainder of the money goes to the distributers of the films being shown. Write a program
    
    that calculates a theater's gross and net box office profit for a night. The program should
    
    ask for the name of the movie, and how many adult and child tickets were sold.

    An adult ticket is 10 dollars; a child ticket is 6.

    A report should be displayed similar to the following:

    Movie Name:                 The Bluey Movie
    
    Adult Tickets sold:         160
    Child Tickets sold:         380

    Gross Box Office Profit:    $3,880.00
    Net Box Office Profit:      $  776.00
    Amount Paid to Distribution:$3,104.00
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    
    const float ADULT_TICKET_COST = 10.00;
    const float CHILD_TICKET_COST = 6.00;
    const float PERCENT_GOING_TO_THEATER = 0.20;
    const float PERCENT_GOING_TO_DISTRIBUTION = 0.80;

    string movieName;
    int adultTicketsSold = 0;
    int childTicketsSold = 0;
    float grossBoxOfficeProfit = 0;
    float netBoxOfficeProfit = 0;
    float amountPaidToDistributor = 0;

    cout << "Enter the title of the film: ";
    getline(cin,movieName);
    cout << "How many adult tickets were sold: ";
    cin >> adultTicketsSold;
    cout << "How many children tickets were sold: ";
    cin >> childTicketsSold;

    grossBoxOfficeProfit = (adultTicketsSold * ADULT_TICKET_COST) + (childTicketsSold * CHILD_TICKET_COST);
    netBoxOfficeProfit = grossBoxOfficeProfit * PERCENT_GOING_TO_THEATER;
    amountPaidToDistributor = grossBoxOfficeProfit * PERCENT_GOING_TO_DISTRIBUTION;

    cout << "Movie Name: " << setw(10) << right << movieName << endl;
    cout << "Adult Tickets Sold: " << setw(10) << right << adultTicketsSold << endl;
    cout << "Child Tickets Sold: " << setw(10) << right << childTicketsSold << endl;
    cout << "Net Box Office Profit: " << setw(10) << showpoint << setprecision(2) <<right << "$" << netBoxOfficeProfit << endl;
    cout << "Amount paid to distribution: " << setw(10) << showpoint <<right << "$" << amountPaidToDistributor << endl;

}

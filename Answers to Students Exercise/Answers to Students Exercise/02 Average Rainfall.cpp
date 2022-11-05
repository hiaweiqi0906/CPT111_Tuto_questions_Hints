// Chapter 3, Programming Challenge 4: Average Rainfall
#include <iostream>
#include <string> //try to remove this. Most PC can still run fine
#include <iomanip> //explain why this line is needed
using namespace std;

int main()
{
	// To hold the names of the months.
	string month1, month2, month3;

	// To hold the rainfall amounts and average.
	double rain1, rain2, rain3, rainAvg;

	cout << "This program calculates the average"
		 << " rainfall for three months.\n";

	// Get the name and rainfall for the 1st month.
	cout << "\nEnter the name of the 1st month: ";
	cin >> month1;
	cout << "Enter the rainfall for " << month1 << ": ";
	cin >> rain1;

	// Get the name and rainfall for the 2nd month.
	cout << "\nEnter the name of the 2nd month: ";
	cin >> month2;
	cout << "Enter the rainfall for " << month2 << ": ";
	cin >> rain2;

	// Get the name and rainfall for the 3rd month.
	cout << "\nEnter the name of the 3rd month: ";
	cin >> month3;
	cout << "Enter the rainfall for " << month3 << ": ";
	cin >> rain3;

	// Calculate the average rainfall
	rainAvg = (rain1 + rain2 + rain3) / 3;

	// Display the average rainfall. 
	cout << "\nThe average rainfall for "
         << month1 << ", " << month2 << ", and " 
		 << month3 << " is " << fixed << showpoint 
		 << setprecision(2) << rainAvg  << " inches.\n\n";
	return 0;
}

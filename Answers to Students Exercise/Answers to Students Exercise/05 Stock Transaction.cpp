// Chapter 3, Programming Challenge 23: Stock Transaction Program
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Constants. Explain this is not necessarily constants.
	const int SHARES_BOUGHT = 1000;		    // Number of shares bought
	const int SHARES_SOLD = 1000;		    // Number of shares sold
	const double COMMISSION_TO_BUY = 0.02;	// Commission for stock bought
	const double COMMISSION_TO_SELL = 0.02;	// Commission for stock sold
	const double PER_SHARE_BUY = 45.50;	    // Price per share when bought
	const double PER_SHARE_SELL = 56.90;	// Price per share when sold
	
	double buyingPrice;		    // To hold the buying price
	double buyingCommission;	// To hold the buying commission
	double sellingPrice;		// To hold the selling price
	double sellingCommission;	// To hold the selling commission
	double profit;			    // To hold the profit (if any)

	// Calculate the amount paid for buying the stock.
	buyingPrice = PER_SHARE_BUY * SHARES_BOUGHT;

	// Calculate the commission paid for buying the stock.
	buyingCommission = buyingPrice * COMMISSION_TO_BUY;

	// Calculate the amount earned for selling the stock.
	sellingPrice = PER_SHARE_SELL * SHARES_SOLD;

	// Calculate the commission paid for selling the stock
	sellingCommission = sellingPrice * COMMISSION_TO_SELL;

	// Calculate the profit after commission and purchase price.
	profit = sellingPrice - buyingPrice - buyingCommission - 
		     sellingCommission;

	cout << setprecision(2) << fixed << showpoint
		 << "\nPurchase Price:      $ " << setw(8) << buyingPrice
		 << "\nPurchase Commission: $ " << setw(8) << buyingCommission
		 << "\nSale Price:          $ " << setw(8) << sellingPrice
		 << "\nSale Commission:     $ " << setw(8) << sellingCommission
		 << "\nProfit:              $ " << setw(8) << profit
		 << endl << endl;
	return 0;
}

// Chapter 3, Programming Challenge 9: How Many Calories?
#include <iostream>
using namespace std;

int main()
{
	// Constants
	const int COOKIES_PER_BAG = 30;       // Cookies in a bag
	const int NUM_SERVINGS = 10;          // Servings in a bag
	const int CALORIES_PER_SERVING = 300; // Calories per serving
   
	int numCookies;        // Number of cookies eaten
	int cookiesPerServing; // Number of cookies per serving
	int caloriesPerCookie; // Calories in a cookie
	int totalCalories;     // Total calories consumed
   
	// Get the number of cookies eaten.
	cout << "How many cookies did you eat? ";
	cin >> numCookies;
   
	// Calculate the number of cookies in a serving.
	cookiesPerServing = COOKIES_PER_BAG / NUM_SERVINGS;
   
	// Calculate the number of calories in a cookie.
	caloriesPerCookie = CALORIES_PER_SERVING / cookiesPerServing;
   
	// Calculate the total calories consumed.
	totalCalories = caloriesPerCookie * numCookies;
   
	// Display the number of calories consumed.
	cout << "You consumed " << totalCalories << " calories.\n";
	return 0;
}
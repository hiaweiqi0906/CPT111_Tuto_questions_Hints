#include <iostream>
using namespace std;

int main(){
	// a bag = 30 cookies = 10 servings = 300cal / servings * 10
	/*
		a bag = 30 cookies = 10 servings
		1 serving = 300 cal = 3 cookies
		thus, 1 cookie = 100 cal
	*/
	int numOfCookies; 
	
	//ask user how many cookies ate
	cout<<"How many cookies you ate?" <<endl;
	cin >> numOfCookies;
	
	// calc calories consumed
	double cal = numOfCookies * 100.0;
	
	//print cal consumed
	cout<<"The calories you consumed: "<<cal <<" cal. "; 
	return 0;
}

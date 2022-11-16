#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	//q1------------------------------------------------------------------------------------
	// A bag of cookies holds 30 cookies. The calorie information on the bag claims there are 10
	//"servings" in the bag and that a serving equals 300 calories. Write a program that asks the
	//user to input how cookies as the input of the cookies he or she actually ate, then report how
	//many total calories were consumed.
	
	// bag = 30 cookies = 10 servings = 
	// 1 serving = 3 cookies = 300 cal
	// 1 cookie = 100 cal
	
	//1. get how many cookies
	int numOfCookies;
	double cal;
	cout<<"How many cookies? ";
	cin>>numOfCookies;
	
	//2. mul wif 100cal
	cal = numOfCookies * 100.0;
	
	//3. print out
	cout<<"You consumed "<<cal<<" calories. "<<endl;



	//q2------------------------------------------------------------------------------------
	//goal: calc avg for 3 months
	//1. get input for name of 3 months
	string month1, month2, month3;
	double rf1, rf2, rf3, avg;
	cout<<"Enter name of month 1: ";
	cin>>month1;
	cout<<"Enter name of month 2: ";
	cin>>month2;
	cout<<"Enter name of month 3: ";
	cin>>month3;
	
	//2. get rf for every months in (1)
	
	cout<<"Enter rainfall of "<<month1<<": ";
	cin>>rf1;
	cout<<"Enter rainfall of "<<month2<<": ";
	cin>>rf2;
	cout<<"Enter rainfall of "<<month3<<": ";
	cin>>rf3;
	
	//3. calc avg
	avg = (rf1 + rf2 + rf3) / 3;
	
	//4. print out
	cout<<"The average rainfall for "<<month1<<", "
		<<month2<<" and "<<month3<<" is "<<avg
		<<" inches.";

	//q3------------------------------------------------------------------------------------
	
	//1. get the year
		//Q.  why we use long long int instead of int? 
		//A: This noic length has exceeded maximum value that can be stored in int data type!
	long long int noIC; 
	int year, age;
	
	cout<<"Enter your IC without -: ";
	cin>>noIC;
	// example noIC: 				  991231123456
	// to get first 2 digit:   	noIC / 10000000000 --> 10 zero's
	//      (year of birth)
	year = noIC / 10000000000 + 1900; // to get full year format --> instead of 99 we get 1999
	
	//2. subtract with 2022 ....
	age = 2022 - year;
	
	//3. print out
	cout<<"Your age: "<<age;

	//External exercise: get year and month from IC number
	long long int noic = 991121987654;
	//1. we get year and month, which is first 4 digits from ic 
	//	using same method but with 8 zero's instead of 10 zero's
	int yearAndMonth = noic / 100000000;

	//2. since we get 4 digits number we can get/extract 
	//	year with /100 and month with %100 to get remainder
	int year = yearAndMonth/100;
	int month = yearAndMonth%100;
	cout<<yearAndMonth<<endl;
	cout<<year<<endl;
	cout<<month<<endl;
	

	//q4------------------------------------------------------------------------------------
	//1. get tempsealevel in C
	double tempSeaLevelC; // camel casing
	cin>>tempSeaLevelC;
	
	//2. calc, print in F
	double tempSeaLevelF;
	tempSeaLevelF = tempSeaLevelC * 1.8 + 32;
	cout<<tempSeaLevelF;
	
	//3. calc, disp C in 1km, 2km and 3km
	/*
		Since it stated temp decreased 5°C every 1km
		Means that every x km, we minus with 5°C * x km, to get final temp
		so in Q3, the x = 1,2,3 km respectively...5*1,2,3 = finalTemp
		in q4, the x = 8.848km...so 5*8.848km
		in q5, we know that the final temp = 0°C, we need to find x km here.
			so since final_temp = sea_level_temp - x * 5 , and final_temp = 0°C
				thus:  x = ( sea_level_temp - final_temp(which is equal to 0) )/ 5
	*/
	cout<<tempSeaLevelC-1*5<<endl; //temp of 1km
	cout<<tempSeaLevelC-2*5<<endl; //temp of 2km
	cout<<tempSeaLevelC-3*5<<endl; //temp of 3km
	
	//4. calc, disp C of mt everest => 8.848km
	cout<<tempSeaLevelC-8.848*5<<endl; //temp of 8.848km
	
	//5. calc, disp height at which temp becomes 0C
	cout<<tempSeaLevelC / 5.0<<endl;
	
	
	//q5------------------------------------------------------------------------------------
	//we get the profit straight away using information given
	double costBuyStock = 1000*45.5; //amount paid for purchasing the stock
	double commBuyStock = costBuyStock * 0.02; // commission paid when purchasing
	double gainSellStock = 1000*56.9; //amount gained for selling the stock 
	double commSellStock = gainSellStock * 0.02;// commission paid when selling
	double totalProfit= gainSellStock - commSellStock - costBuyStock - commBuyStock; // profit
	cout<<totalProfit;
	//
}

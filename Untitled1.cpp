#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
//	// 3 var to store names of 3 months, 
//	// 3 var to store rainfall for 3 monthsm
//	string month1, month2, month3;
//	double rf1, rf2, rf3, avg;
//	
//	//1. get name and the rainfall
//	cout<<"month 1: ";
//	cin>>month1;
//	cout<<"rainfall for "<<month1<<": ";
//	cin>>rf1;
//	
//	cout<<"month 2: ";
//	cin>>month2;
//	cout<<"rainfall for "<<month2<<": ";
//	cin>>rf2;
//	
//	cout<<"month 3: ";
//	cin>>month3;
//	cout<<"rainfall for "<<month3<<": ";
//	cin>>rf3;
//	
//	//2. sum all up and divide 3, get avg
//	avg = (rf1 + rf2 + rf3) / 3;
//	
//	//3. print out
//	cout<<"Avg: "<<setprecision(6)<<avg;

//q3
// 2022 - 1999
//	//1. get first 2 digits on ic -> represent year borned
//	long long int noIc;
//	int yearBorn, age;
//	cout<<"No IC: ";
//	cin>>noIc;
//	yearBorn = noIc / 10000000000;
//	
//	//2. add 1900 to the digits
//	yearBorn+=1900; // yearB= yB + 1900
//	
//	//3. subtract wif 2022 -> to get age
//	age = 2022 - yearBorn;
//	
//	//4. print
//	cout<<age<<endl;

	//q4:
	//camel case
	//snake case sea_level_temp
	//1. get sealeveltemp
//	double seaLevelTemp, 
//		   seaLevelTempInF, 
//		   tempOfMtEverest,
//		   height0C;
//		   
//	cin>>seaLevelTemp;
//	
//	//2. convert to F, using formula
//	seaLevelTempInF = seaLevelTemp * 1.8 + 32;
//	cout<<"Sea level in F: "<< seaLevelTempInF<<endl;
//	
//	//3. determine temp in 1000, 2000, 3000m
//	cout<<"1000m: "<<seaLevelTemp-5*1<<endl;
//	cout<<"2000m: "<<seaLevelTemp-5*2<<endl;
//	cout<<"3000m: "<<seaLevelTemp-5*3<<endl;
//	
//	//4. calc temp of mt everest
//	// 8,848m 0.848*5
//	tempOfMtEverest = seaLevelTemp - 5*8.848;
//	cout<<"temp of Mt Everest: "<<tempOfMtEverest<<endl;
//	
//	//5. calc height 0C
//	height0C = seaLevelTemp / 5.0;
//	cout<<height0C;
	
	
	int amountPaid = 45.5 * 1000;
	double commPaidBuy = amountPaid * 0.02;
	
	int amountSold = 56.9 * 1000;
	double commPaidSold = amountSold * 0.02;
	
	double profit = amountSold- commPaidSold - amountPaid - commPaidBuy;
	cout<<profit<<endl;
	return 0;
}

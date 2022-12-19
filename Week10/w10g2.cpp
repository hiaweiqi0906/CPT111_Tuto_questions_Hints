////#include <iostream>
////using namespace std;
////
////int main(){
////	// q1
////	/*
////	global: 
////		- declared outside the func
////		- can be accessed through out the program
////	local:
////		- declared inside func, can only be access by that function
////		- scope of the local is in that function only
////*/
////	return 0;
////}
//
//#include <iostream>
//using namespace std;
//void showVar(); // Function prototype
//int main()
//{
//for (int count = 0; count < 10; count++)
//showVar();
//return 0;
//}
//void showVar() // Definition of function showVar
//{
//	// static
//static int var = 10; // not erased
//// allocate memory for this var, keep inside memory, finish program
//cout << var << "\t";
//var++;
//}

#include <iostream>
using namespace std;

int getNumEmployees();
int calcAbsentDays(int);
double calcAvgAbsentDays(int, int);

int main(){
	int numOfEmployees = getNumEmployees();
	int numOfAbsentDays= calcAbsentDays(numOfEmployees);
	cout<<"The avg absent days: "<< calcAvgAbsentDays(numOfEmployees, numOfAbsentDays);
	
	return 0;
}

int getNumEmployees(){
	int num;
	cout<<"How many employees:";
	cin>>num;
	return num;
}

int calcAbsentDays(int numOfEmployees){
	int numOfAbsentDays, total=0;
	for(int i=1; i<=numOfEmployees; i++){
		cout<<"How many days absent for employee "<<i<<":";
		cin>>numOfAbsentDays;
		total+=numOfAbsentDays;
	}
	
	return total;
}
double calcAvgAbsentDays(int numOfEmployees, int numOfAbsentDays){
	return numOfAbsentDays / numOfEmployees;
}

/*
void showVal(int=5, int=10); // Function prototype with default arguments
// one good practice, 
int main()
{
showVal(); //Function call
showVal(9);
showVal(9, 99);
return 0;
}
void showVal(int x, int y) // Function definition
{
cout<< x << "\t" << y <<endl;
}


funct prototype: void compute(int=5, double, long=65536);
funct header: void compute(int par1, double par2, long par3)
*/

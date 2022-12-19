#include <time.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

/*
int cointoss(){
	
	return rand() % 2;
}

int main(){
	srand(time(0));
	cout<<cointoss(); 
	return 0;
}*/
/*
void printHello()
{
	cout<<"Hello";
}

int main(){
	cout<<"test";
	return 0;
}


// function prototypes
void printHello();  
void printBye(); 

//function definition
int main() // function header
// returnType nameFunct(__lists of parameters__)
{
	printHello();
	printBye();
	return 0; 
}

//return nothing
void printHello()
{
	cout<<"Hello";
}

void printBye()
{
	cout<<"Bye";
}
*/
/*
void qualify(int);
void noQualify();

int main()
{
double salary;
int years;
cout << "This program will determine if you qualify\n";
cout << "for our credit card.\n";
cout << "What is your annual salary? ";
cin >> salary;
cout << "How many years have you worked at your "; cout << "current job? ";
cin >> years;
if (salary >= 17000.0 && years >= 2){
	qualify(5);
}
else{
	noQualify();
}

return 0;
}

void qualify(int x) // parameter
{
	cout<<"you are qualified, annual rate = 12%";
}

void noQualify(){
	cout<<"you are not qualify, bcus u didnt fulfil the requirments";	
}


void timesTen(int number)
{
	cout<<number*10;
}

void timesTen(int);




void showDollars(double); // Function prototype

int main()
{
double payRate, hoursWorked, wages;
cout << "How many hours have you worked? ";
cin >> hoursWorked;
cout << "What is your hourly pay rate? ";
cin >> payRate;
wages = hoursWorked * payRate;
showDollars(wages);
return 0;
}
// You must write the definition of the function showDollars
// here. It should take one parameter of the type double.
// The function should display the message "Your wages are RM"
// followed by the value of the parameter.

void showDollars(double wages){
	cout<<"Your wages are RM"<<wages;
}

int days(int years, int months, int weeks)
{
}

void coinToss();

int main(){
	srand(time(0)); // seed the generator
	int times;
	cout<<"How many times?";
	cin>>times;
	
	for(int i=0; i<times; i++){
		coinToss();
	}
}

void coinToss()
{
	int coin = rand()%2 +1; // 1,2
	if(coin == 1){
		cout<<"heads.\n";
	}else{
		cout<<"tails.\n";
	}
}


//fun prototypes
double getLength();
double getWidth();
double getArea(double, double);
void displayData(double, double, double);

scope

global var
int x=8; 

int main(){
	double length = getLength(); // local 
	double width = getWidth();
	
	double area = getArea(length, width);
	
	// arguments
	displayData(length, width, area);
	return 0;
}

double getLength(){
	static double length; //local 
	
	cout<<"Length? ";
	cin>>length;
	
	return length;
}

double getWidth(){
	double width;
	
	cout<<"Width? ";
	cin>>width;
	
	return width;
}
double getArea(double l, double w){
	double area = l*w;
	return area;
}

//int returnSome(){
//	int x=5;
//	if(x>4){
//		return 0;
//	}else{
//		return 1;
//	}
//}

//parameters
void displayData(double l, double w, double a){
	cout<<"length: "<<l<<", width: "<<w<<", area: "<<a;
}

global: 
-type of var that can be used or accessed by all functions in the program

local:
-type of var, only be accessed by the function it was declared
-var will be deleted from memory once the function is finished

static local:
-type of var, only be accessed by the function it was declared
-var will NOT be deleted from memory once the function is finished
-var will be deleted PROGRAM is finished



void showVar(int=5); // Function prototype
int main()
{
for (int count = 0; count < 10; count++)
showVar();
return 0;
}

void showVar(int x) // Definition of function showVar
{
static int var = 10; // basic local 
cout << var << "\t";
var++;
cout<<"...function is finished..."<<endl;
}

prototype:
void compute(int=5, double, long=65536);

header:
void compute(int x, double y, long z)




void func1(int &, int &);
void func2(int &, int &, int &);
void func3(int, int, int);
int main()
{
	int x = 0, y = 0, z = 0;
	cout << x << " " << y << " " << z << endl;
	func1(x, y);
	cout << x << " " << y << " " << z << endl;
	func2(x, y, z);
	cout << x << " " << y << " " << z << endl;
	func3(x, y, z);
	cout << x << " " << y << " " << z << endl;
	return 0;
}
void func1(int &a, int &b)
{
	cout << "Enter two numbers: ";
	cin >> a >> b;
}
void func2(int &a, int &b, int &c)
{
	b++;
	c--;
	a = b + c;
}
void func3(int a, int b, int c)
{
	a = b - c;
}*/

int askPatient();
void enterCharges(double&=0, double&=0, double&=0, double&=0);
void enterCharges(double&=0, double&=0); // function overloading

double calcCharges(double=0, double=0, double=0, double=0);
double calcCharges(double=0, double=0);

void displayCharges(double=0);

int main(){
	int choice = askPatient();
	double charges = 0, hospitalCharges, medicCharges;
	if(choice == 1)//1 means in, 0 means out
	{
		double numOfDays, dailyRate;
		enterCharges(numOfDays, dailyRate, hospitalCharges, medicCharges);
		charges = calcCharges(numOfDays, dailyRate, hospitalCharges, medicCharges);
	}else{
		enterCharges(hospitalCharges, medicCharges);
		charges = calcCharges(hospitalCharges, medicCharges);
	}
	
	displayCharges(charges);
	return 0;
}


int askPatient(){
	int choice;
	cout<<"In-patient or Out-patient? enter 1/0: ";
	cin>>choice;
	
	return choice;
}

void enterCharges(double& numOfDays, double& dailyRate, double& hospitalCharges, double& medicCharges){
	cout<<"Enter num of days: ";
	cin>>numOfDays;
	
	cout<<"Enter daily rate: ";
	cin>>dailyRate;
	
	cout<<"Enter hospital charges: ";
	cin>>hospitalCharges;
	
	cout<<"Enter medic charges: ";
	cin>>medicCharges;
}

// function overloading
void enterCharges(double& hospitalCharges, double& medicCharges) {
	cout<<"Enter hospital charges: ";
	cin>>hospitalCharges;
	
	cout<<"Enter medic charges: ";
	cin>>medicCharges;
}

double calcCharges(double numOfDays, double dailyRate, double hospitalCharges, double medicCharges){
	return ( ( numOfDays * dailyRate ) + hospitalCharges + medicCharges);
}

double calcCharges(double hospitalCharges, double medicCharges){
	return ( hospitalCharges + medicCharges);
}

void displayCharges(double charges){
	cout<<"Your total charges = RM"<<charges;
}

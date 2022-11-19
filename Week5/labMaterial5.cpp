#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int main(){
	
	//q1
	//initialize values
	int num, sum=0;
	do{
		//get num from user
		cin>>num;	
	}while(num<0);
	//	
	//	cin>>num;
	//	while(num<0){
	//		//...
	//	}	
	//sum numbers - for
	for( int i = 1;i<=num ; i++){ // i= i+1; i+=1; ++i
		sum = sum + i; //num //sum+=i
	}
	//print sum
	cout<<sum;
	
	cout<<++num;
	cout<<num; //pre-increment
	
	cout<<num++; //post-increment
	cout<<num;
	
	//q2
	// print using loop
	// initial value
	// condition
	// update
	for(int i=0; i<128; i++){
		if(i%16 == 15) cout<<static_cast<char>(i)<<endl;
		else cout<<static_cast<char>(i)<<", ";
	}


	//q3
	//get num
	int num, counter=1;
	cin>>num;
	
	//loop until 10, print num*i
	while(counter<11){
		// user enter 5,
		// 5 * 1 = 5
		// 5 * 2 = 10
		//...
		// 5 * 10 - 50
		int total = num*counter;
		cout<<num<<" * "<<counter<<" = "<< (num*counter) <<endl;
		counter=counter+1; //11 //updater 
	}

	//q4
	// using for loop
	// rad = deg / 180 * 3.141593 
	double rad;
	for(int deg=0; deg<=90 ; deg+=10){
		rad = deg / 180 * 3.141593;
		cout<<rad;
	}

	//q5
	//using for loop
	double cal;
	for(int minutes=5; minutes<=30 ; minutes+=5){ // minutes = minutes+5;
		cal = minutes * 3.6;
		cout<<"Run for "<<minutes<<" minutes, you will burn "<<cal<<" calories"<<endl;
	}


	//q6
	//get speed, hour
	int speed, hours, distance; //3
	cout<<"What is the speed of the vehicle in mph? ";
	cin>>speed;
	while(speed<0){
		cout<<"Sorry, cannot in negative speed. ";
		cin>>speed;
	}
	cout<<"How many hours has it traveled? ";
	cin>>hours;
	while(hours<1){
		cout<<"Sorry, cannot less than 1. ";
		cin>>hours;
	}
	
	cout<<"Hour Distance Traveled\n-------------------------------\n";
	
	// using for loop
	for(int eachHour=1; eachHour <= hours; eachHour++){ // we know the loop has upper limit
		distance = speed * eachHour;
		cout<<eachHour<<" "<<distance<<endl;
	}


	//q7
	//using for loop
	//get 3 numbers
	int initValue, secValue, upperLimit, d, latest;
	cin>>initValue>>secValue>>upperLimit;
	while(initValue<=0){
		cin>>initValue; //5
	}
	
	while(secValue<=0){
		cin>>secValue; //10
	}
	
	while(upperLimit<=0){
		cin>>upperLimit; //5
	}
	//5 10 15 20 25
	//	while(initialValues<=0 || count<=0 || secValue<=0){
//		cin>>initValue>>secValue>>count;
//	}

	//1, 5, 9, 13, 
	// a, d
	d = secValue - initValue; //5
//	latest = initValue;
	
	//start for loop
	//original
//	for(int n=1; n<=count; count++){
//		latest = latest + d; // latest += d
//		cout<<latest<<"\n";
//	}

	//altern     			100 <= 96			100
	for(latest = initValue; latest<=upperLimit; latest+=d){
		cout<<latest<<", "; // ...., 95
	}
	
	// q8
	// racecar 123454321
	// num1 = 12321 == 12321 /palindrome
	// numR = 12321
	// numR = 10
	// num1/10 => r
	int n, nR=0, initN;
	cin>>n;
	initN = n;
	while(n!=0){
		nR = nR*10; //12340
		nR = nR + n%10; //3
		//nr = 12343, n=12
		
		cout<<"Removed "<<n%10<<" from "<<n<<", current n="<<n/10<<", nR="<<nR<<endl;
		
		n=n/10;
	}
	if(initN == nR) cout<<"Palindrome";
	
	
	//q9
	//get 2 chars, 2 values from user
	char c1, c2;
	int n1, n2, counter=0, row, col;
	cin>>c1>>n1>>c2>>n2>>row>>col;
	
	for(int i=0; i<(row*col); i++){
		if(counter<n1){
			// if counter = 0 to n1, print c1, add counter after printed
			cout<<c1;
			counter++;
		} 
		else if(counter<(n1+n2)){
			// if counter = n1 to n1+n2, print c2, add counter after printed
			cout<<c2;
			counter++;
		} 
		if(counter == n1+n2){
			// reset the counter if already printed n1+n2 characters
			counter=0;
		} 
		
		if(i%col == col-1) {
			// handle characters per line
			cout<<endl;
		}
	}		
	

	return 0;
}

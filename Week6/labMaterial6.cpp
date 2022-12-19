<<<<<<< HEAD
#include <iostream>
#include <cmath>
using namespace std;

int main(){
//	//q1
//	// get +num
//	int num;bool isPrime=true;
//	cin>>num;
//	
//	// input validation
//	while(num<=0){
//		cout<<"must be positive!";
//		cin>>num;
//	}
//	
//	
//	if(num%2 == 0){
//	//----even numbers---
//		if(num==2){
//			// if num==2, tell user is prime
//			isPrime = true;
//		}else{
//			// else tell user its not prime
//			isPrime = false;
//		}
//	
//	}else{
//	//----odd numbers---
//	// get sqrt
//	double sqrtOfNum = sqrt(num);
//	
//	// identify odd integers <= sqrt 3,5
//	// check is num divisible by any of the numbers get from step above 33
//	// if divisible by any, tell user is not prime
//	for(int i=3; i<=sqrtOfNum; i+=2){ //33 / 5
//		if(num%i ==0){
//			isPrime = false; 
//			break;
//			continue;
//		}else{
//			isPrime = true;
//		}
//	}
//	
//	// else, prime
//	// at the end, print according to the boolean
//	if(isPrime){
//		cout<<"it's prime";
//	}else{
//		cout<<"it's not prime";
//	}
//	}
	
	//q2
	// get num
//	int num, counterPrintedToUser=0, number=1;
//	cin>>num;
//	
//	// input validation
//	while(num<=0){
//		cout<<"must be positive!";
//		cin>>num;
//	}
//	//5, gen 5 non-prime number
//	//use while-loop
//	while(counterPrintedToUser<num){
//		
//		if(number%2 == 0){
//			if(number!=2){
//				cout<<number<<", ";
//				counterPrintedToUser++;
//			}
//		}else{
//			if(number==1){
//				cout<<number<<", ";
//				counterPrintedToUser++;
//			}else{
//				double sqrtOfNum = sqrt(number);
//				for(int i=3; i<=sqrtOfNum; i+=2){
//					if(number%i ==0){
//						cout<<number<<", ";
//						counterPrintedToUser++;
//						break;
//					}
//				}
//			}
//			
//		}
//		
//		number=number+1;
//	}


	//q3
//	int n;
//	cout<<"Please enter a number: ";
//	cin>>n;
//	
//	cout<<"---------------------------------------------------\n";
//	cout<<"Pattern A\t\t\t\tPattern B\n";
//	cout<<"---------------------------------------------------\n";
//	
//	//num of rows
//	for(int numOfRows=1; numOfRows<=n; numOfRows++){
//		// print * according to rows
//		for(int numOfStar=1; numOfStar<=numOfRows; numOfStar++){
//			cout<<"*";
//		}
//		cout<<"\t\t\t\t\t";
//		
//		// print + according to rows
//		for(int numOfPlus=1; numOfPlus<=n-numOfRows+1; numOfPlus++){
//			cout<<"+";
//		}
//		cout<<endl;
//	}
	
//	//q4
//		int n;
//	cout<<"Please enter a number: ";
//	cin>>n;
//	
//	//normal
//	for(int numOfRows=1; numOfRows <= n; numOfRows++){
//		//spaces
//		//n=7, r1->6 = 7-1, r2->5=7-2, r3->4 = 7-3...
//		//n=5, r1->4, r2->3, r3->2
//		for(int numOfSpaces=1; numOfSpaces<=n-numOfRows; numOfSpaces++){
//			cout<<" ";
//		}
//		
//		//star
//		//n=7; r1->1, r2->2, r3->3,...r7->7
//		for(int numOfStars=1; numOfStars<=numOfRows; numOfStars++){
//			cout<<"* ";
//		}
//		cout<<endl;
//	}
//	
//	//upside-down
//	for(int numOfRows=6; numOfRows>=1; numOfRows--){
//		for(int numOfSpaces=1; numOfSpaces<=n-numOfRows; numOfSpaces++){
//			cout<<" ";
//		}
//		
//		//star
//		//n=7; r1->1, r2->2, r3->3,...r7->7
//		for(int numOfStars=1; numOfStars<=numOfRows; numOfStars++){
//			cout<<"* ";
//		}
//		cout<<endl;
//	}

//	//q5
//	//get n
//	int n, num, cPos=0, cNeg=0;
//	cin>>n;
//	
//	//for 1 to n
//	for(int i=0; i<n; i++){
//		// let user enter number
//		cin>>num;
//		
//		// count numbers of positive and negative numbers
//		if(num>0) cPos++;
//		else cNeg++;
//	}
//	
//	cout<<cPos<<" positive numbers entered, "<<cNeg<<" negative numbers entered. "<<endl;
	
	//q6
//	for(int i=1; i<=10; i++){
//		if(i==5){
//			continue;
//		}
//		
//		cout<<i<<endl;
//	}
	//....
	
//	//p2 q5 + q6
//	int n;
//	cin>>n;
//	// star
//	for(int numOfRows=n; numOfRows>=1;numOfRows--){
//		for(int numOfStar=1; numOfStar<=numOfRows; numOfStar++){
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//	
//	// plus
//	for(int numOfRows=1; numOfRows<=n;numOfRows++){
//		for(int numOfPlus=1; numOfPlus<=numOfRows; numOfPlus++){
//			cout<<"+";
//		}
//		cout<<endl;
//	}
	
	
	
	return 0;
}
=======
#include <iostream>
#include <cmath>
using namespace std;

int main(){
//	//q1
//	// get +num
//	int num;bool isPrime=true;
//	cin>>num;
//	
//	// input validation
//	while(num<=0){
//		cout<<"must be positive!";
//		cin>>num;
//	}
//	
//	
//	if(num%2 == 0){
//	//----even numbers---
//		if(num==2){
//			// if num==2, tell user is prime
//			isPrime = true;
//		}else{
//			// else tell user its not prime
//			isPrime = false;
//		}
//	
//	}else{
//	//----odd numbers---
//	// get sqrt
//	double sqrtOfNum = sqrt(num);
//	
//	// identify odd integers <= sqrt 3,5
//	// check is num divisible by any of the numbers get from step above 33
//	// if divisible by any, tell user is not prime
//	for(int i=3; i<=sqrtOfNum; i+=2){ //33 / 5
//		if(num%i ==0){
//			isPrime = false; 
//			break;
//			continue;
//		}else{
//			isPrime = true;
//		}
//	}
//	
//	// else, prime
//	// at the end, print according to the boolean
//	if(isPrime){
//		cout<<"it's prime";
//	}else{
//		cout<<"it's not prime";
//	}
//	}
	
	//q2
	// get num
//	int num, counterPrintedToUser=0, number=1;
//	cin>>num;
//	
//	// input validation
//	while(num<=0){
//		cout<<"must be positive!";
//		cin>>num;
//	}
//	//5, gen 5 non-prime number
//	//use while-loop
//	while(counterPrintedToUser<num){
//		
//		if(number%2 == 0){
//			if(number!=2){
//				cout<<number<<", ";
//				counterPrintedToUser++;
//			}
//		}else{
//			if(number==1){
//				cout<<number<<", ";
//				counterPrintedToUser++;
//			}else{
//				double sqrtOfNum = sqrt(number);
//				for(int i=3; i<=sqrtOfNum; i+=2){
//					if(number%i ==0){
//						cout<<number<<", ";
//						counterPrintedToUser++;
//						break;
//					}
//				}
//			}
//			
//		}
//		
//		number=number+1;
//	}


	//q3
//	int n;
//	cout<<"Please enter a number: ";
//	cin>>n;
//	
//	cout<<"---------------------------------------------------\n";
//	cout<<"Pattern A\t\t\t\tPattern B\n";
//	cout<<"---------------------------------------------------\n";
//	
//	//num of rows
//	for(int numOfRows=1; numOfRows<=n; numOfRows++){
//		// print * according to rows
//		for(int numOfStar=1; numOfStar<=numOfRows; numOfStar++){
//			cout<<"*";
//		}
//		cout<<"\t\t\t\t\t";
//		
//		// print + according to rows
//		for(int numOfPlus=1; numOfPlus<=n-numOfRows+1; numOfPlus++){
//			cout<<"+";
//		}
//		cout<<endl;
//	}
	
//	//q4
//		int n;
//	cout<<"Please enter a number: ";
//	cin>>n;
//	
//	//normal
//	for(int numOfRows=1; numOfRows <= n; numOfRows++){
//		//spaces
//		//n=7, r1->6 = 7-1, r2->5=7-2, r3->4 = 7-3...
//		//n=5, r1->4, r2->3, r3->2
//		for(int numOfSpaces=1; numOfSpaces<=n-numOfRows; numOfSpaces++){
//			cout<<" ";
//		}
//		
//		//star
//		//n=7; r1->1, r2->2, r3->3,...r7->7
//		for(int numOfStars=1; numOfStars<=numOfRows; numOfStars++){
//			cout<<"* ";
//		}
//		cout<<endl;
//	}
//	
//	//upside-down
//	for(int numOfRows=6; numOfRows>=1; numOfRows--){
//		for(int numOfSpaces=1; numOfSpaces<=n-numOfRows; numOfSpaces++){
//			cout<<" ";
//		}
//		
//		//star
//		//n=7; r1->1, r2->2, r3->3,...r7->7
//		for(int numOfStars=1; numOfStars<=numOfRows; numOfStars++){
//			cout<<"* ";
//		}
//		cout<<endl;
//	}

//	//q5
//	//get n
//	int n, num, cPos=0, cNeg=0;
//	cin>>n;
//	
//	//for 1 to n
//	for(int i=0; i<n; i++){
//		// let user enter number
//		cin>>num;
//		
//		// count numbers of positive and negative numbers
//		if(num>0) cPos++;
//		else cNeg++;
//	}
//	
//	cout<<cPos<<" positive numbers entered, "<<cNeg<<" negative numbers entered. "<<endl;
	
	//q6
//	for(int i=1; i<=10; i++){
//		if(i==5){
//			continue;
//		}
//		
//		cout<<i<<endl;
//	}
	//....
	
//	//p2 q5 + q6
//	int n;
//	cin>>n;
//	// star
//	for(int numOfRows=n; numOfRows>=1;numOfRows--){
//		for(int numOfStar=1; numOfStar<=numOfRows; numOfStar++){
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//	
//	// plus
//	for(int numOfRows=1; numOfRows<=n;numOfRows++){
//		for(int numOfPlus=1; numOfPlus<=numOfRows; numOfPlus++){
//			cout<<"+";
//		}
//		cout<<endl;
//	}
	
	
	
	return 0;
}
>>>>>>> 3d58ea08f4bff5c9f24dbb4997ccf2d3e56cebbe

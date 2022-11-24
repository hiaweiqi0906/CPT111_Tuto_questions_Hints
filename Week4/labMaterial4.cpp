#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){
//	// q1
//	// get a input number
//	int num;
//	cin>>num;
//	
//	cout<<abs(num);
//	
//	// case 1: - number
//	if(num < 0){
//		num = num * -1;
//	}
//	
//	// case 2: + number
//	// case 3: 0
//	// print the absolute
//	cout<<num;


//	// q2
//	// get 2 numbers
//	int num1, num2;
//	cin>>num1>>num2;
//	
//	// if num1 > num2
//	if(num1 > num2) cout<<"num1 is bigger";
//	
//	// else if num1 < num2
//	else if(num2 > num1) cout<<"num2 is bigger";
//	
//	// else -> num1 == num2
//	else cout<<"they r the same!!";

//	//q3
//	// get current year, yob
//	int currentYear, yearOfBirth, age;
//	cin>>currentYear>>yearOfBirth;
//	
//	// get age = current year - yob
//	age = currentYear - yearOfBirth;
//	
//	// if age within 18 to 28
//	if( age>=18 && age<=28) cout<<"U r eligible!";
//	// else age is NOT within 18 to 28
//	else cout<<"U r eligible!";

//	//q4
//	// get length1, width1, length2, width2 from user
//	int length1, width1, length2, width2, area1, area2;
//	cin>>length1>>width1>>length2>>width2;
//	
//	// get area1, area2
//	area1 = length1 * width1;
//	area2 = length2 * width2;
//	
//	// if area1>area2
//	if(area1>area2) cout<<"1st rectangle bigger!";
//	// if area2>area1
//	else if (area2 > area1) cout<<"2nd rectangle bigger!";
//	// else
//	else cout<<"Both have the same area.";

//	//q5
//	// get weight and height
//	double weight, height, bmi;
//	cout<<"Enter weight(in pounds): ";
//	cin>>weight;
//	
//	cout<<"Enter height(in inches): "
//	cin>>height;
//	
//	// calc bmi
//	bmi = weight * 703 / (height * height); // pow(height, 2.0)
//	
//	// if bmi<18.5 -> underweight
//	if(bmi<18.5){
//		cout<<"Oops, You\'re underweight.";
//		
//	}else if(bmi>=18.5 && bmi<=25) {
//	// healthy
//		cout<<"Congrats, you are healthy!";
//		
//	}else {
//		// overweight
//		cout<<"Oops, You\'re overweight";
//	}

//	//q6
//	// get 2 colors, with specific input
//	string col1, col2;
//
//	// input -> red || blue || yellow
//	cin>>col1>>col2; 
////	cnt use getline()
//
//	// if not in specific color -> error msg
//	// input validation
//	if((col1!="red" && col1!="blue" && col1!="yellow")
//	|| (col2!="red" && col2!="blue" && col2!="yellow")) {
//		cout<<"invalid input";
//	} else {
//		// else 
//		// determine sec color
//		// if color1 == red  && color2 == blue || 
//		//		color1 == blue  && color2 == red -> purple
//		if ((color1 == "red"  && color2 == "blue") || 
//			(color1 == "blue"  && color2 == "red") ){
//				cout<<"purple";
//			}
//		// if color1 == red  && color2 == yellow || 
//		//		color1 == yellow  && color2 == red -> orange
//		else if ((color1 == "red"  && color2 == "yellow") || 
//			(color1 == "yellow"  && color2 == "red") ){
//				cout<<"orange";
//			}
//		
//		else{
//			cout<<"green";
//		}
//		// if color1 == yellow  && color2 == blue || 
//		//		color1 == blue  && color2 == yellow -> green
//	}
	
//	//q7
//	// generate 2 numbers randomly
//	srand(time(0)); // seed the rng using system time
//	int num1, num2, userSum, sum;
//	num1 = rand() % 1000;
//	num2 = rand() % 1000; // 0 - 999 -> 1000 numbers
//	sum = num1+num2;
//	// print to user these 2 numbers 
//	cout<< num1 <<" + "<<num2<<" = ? \nEnter your answer: ";
//	// get sum from user
//	cin>>userSum;
//	
//	
//	// compare, if sum is correct -> congrats
//	if(userSum == sum){
//		cout<<"Congratulation! ";
//	}else{
//		cout<<"Sorry, try again. Correct ans: "<<sum;
//	}
//	// if incorrect-> try agn + correct answer
		
//	//q7
//	// get weight and distance
//	double weight, distance, charges;
//	cin>>weight>>distance;
//	if(weight<=0 || weight>20 || distance<10 || distance>3000){
//		cout<<"Invalid input";
//	}else{
//		// determine charges according to the weight
//		if(weight<=2){
//			charges = 1.1 * distance / 500;
//		}else if(weight>2 && weight<=6){
//			charges = 2.2 * distance / 500;
//		}else if(weight>6 && weight<=10){
//			charges = 3.7 * distance / 500;
//		}else{
//			charges = 4.8 * distance / 500;
//		}
//		
//		cout<<"Your charges: $"<<charges;
//	}

//	//q9
//	// get time taken for firsthalf, whole race
//	// input validation: cnt have 0 or less
//	double firstHalf, wholeRace, secondHalf;
//	cin>>firstHalf>>wholeRace;
//	
//	if(firstHalf <= 0 || wholeRace <=0) cout<<"Invalid input. "
//	else{
//		// determine secondhalf = whole race - firsthalf
//		secondHalf = wholeRace - firstHalf;
//		
//		// if secondhalf < firsthalf -> print congrats
//		if(secondHalf < firstHalf) cout<<"Congrats, that\'s a negative split!";
//		else if(secondHalf > firstHalf) cout<<"Second half used more time";
//		// else if secondhalf > firsthalf -> no negative split
//	}
	
//	//q10
//	// print the menu
//	cout<<"Choose a medium: \n\t1. Carbon Dioxide \n\t2. Air\n\t3. Helium\n\t4. Hydrogen\n\n\nChoice: "
//	// get user's choice
//	int choice; double timeTaken, distance;
//	cin>>choice;
//	
//	// get timetaken
//	cin>>timeTaken;
//	// validate choice and timetaken
//	if(choice<1 || choice>4 || timeTaken <0 || timeTaken>30){
//		cout<<"Invalid";//invalid, print error msg
//	}else{
//	// if valid
//	// calc distance	
//		if(choice==1) distance=258*timeTaken;
//		else if(choice==2) distance=331.5*timeTaken;
//		else if(choice==3) distance=972*timeTaken;
//		else distance=1270*timeTaken;
//		// print out
//		cout<<"Distance = "<<distance<<" m. ";
//	}
	
	return 0;
}

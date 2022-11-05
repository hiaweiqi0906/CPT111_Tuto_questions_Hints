#include<iostream>
using namespace std;

int main(){
	long long int IC1; //show why long alone cannot work and long int cannot work
	int YOB1;
	
	cout << "What is the IC number: "
	YOB1 = IC1 / 10000000000;
	YOB1 = YOB1 + 1900;
		
	cout <<"The age for IC card holder: " << IC1 << " is " << 2020-YOB1 << " years old."<<endl;
	return 0;
}

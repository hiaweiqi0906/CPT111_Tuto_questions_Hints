#include <iostream>
using namespace std;

//// The doSomething function
//int doSomething(int *x, int *y) 
//// just to show that tis is pointer
//{
//	
//	// get value in pointer address
//	int temp = *x;
//	*x = *y * 10;
//	*y = temp * 10;
//	return *x + *y;
//}
//
//int* createDynamicArr(int numOfElement){
//	int *arrPtr = new int[numOfElement]; // dynamic array
//	return arrPtr;
//}

/*
	0 4 7 6 9
*/

//bubble sort
void sort(double *scoresArr, int count){
	for(int i=0; i<count; i++){
		for(int j=0; j < count-i-1; j++){
			if(*(scoresArr+j) > *(scoresArr+j+1)){
				//swap === chg number
				double temp = *(scoresArr+j);
				*(scoresArr+j) = *(scoresArr+j+1);
				*(scoresArr+j+1) = temp;
			}
		}
	}
}

double calcAvg(double *scoresArr, int count){
	double sum=0.0;
	for(int i=1; i<count; i++){
		sum += *(scoresArr+i);
	}
	return sum/count;
}

int main(){
	//pointers
	// q1: cout<<&count; // reference operator
	// q2: float *fltPtr = nullptr;	
	// q3: cout<<*iptr; //address of x // indirection operator
	// q4: get the value stored in address
	// q5: 
	/*
	50 60 70
	500 300 140
	*/
	
	// q6
//	int arr[100];
//	int *ptr = arr; // points to first element
//	for (int x = 0; x < 100; x++)
//		cout<<*(ptr + x)<<endl; // pointers for arrays
	
	//q7
//	ptr=ptr+10; // 11th element
	// 1 int == 4 bytes
	// 10 int == 40 bytes
	// 40 = 28
	//  0x6ffe14 + 28 = 0x6ffe3c
	//address of arr[0] = 0x6ffe14
	// address of arr[1] = 0x6ffe1C
	// ...
	// address of arr[10] = ?
	
	// q8: 
	/*
		a. valid
		b. valid
		c. invalid
		d. invalid
		e. valid
	*/
	
	// q9:
	/*
		a. valid
		b. valid
		c. invalid, type is mismatch
		d. valid
		e. ivar is not declared yet
	*/
	
//	int arr2[] = {0,10,2};
//	int *newptr = arr2;
//	cout<<*(arr2+1); //int x=6;
//	cout << *(newptr+1);
	
//	int xx = 6;
//	int yy = 7;
//	
//	int *xptr = &xx, *yptr = &yy;
//	
//	int result = doSomething(xptr, yptr);// doSomething(xx, yy); // pass by reference
//	

	int count;
	cout<<"How many test scores? ";
	cin>>count;
	
	double *scoresArr = new double[count]; // create dynamic array
	
	for(int i=0; i<count; i++){
		cin>>*(scoresArr + i);
	}
	
	// pass to function to sort -> arrange in ascending orders
	sort(scoresArr, count);
	
	double avg = calcAvg(scoresArr, count);
	
	cout<<"Sorted scores: ";
	for(int i=0; i<count; i++){
		cout<<*(scoresArr + i)<<", ";
	}
	
	cout<<"\nAvg scores: "<<avg;


	//q1. 2,3,6,7,10,11,...
	/* Vitrox
	i. write program to print this series
	
	ii. suggest a efficient way to check whether a num
		is in the series. 
	*/
	
	/*
	NI
	imagine arr elements from 1-100, the is shuffled, 
	one missing number, replaced with 0, find that number
	*/
	
	/*
	give u roman number, u nid to tell me what is number
	*/
	
	return 0;
}

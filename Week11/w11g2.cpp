#include <iostream>
using namespace std;
int main()
{
//	//q4
//	int fish[20]; // declare 20 elements array
//
//fish[0]=null;
//1=null
//...
//19=null
//
//	for(int i=0; i<20; i++){
//		cin>>fish[i];
//	}

	//q5
	/*
	int ages[10]={5, 7, 9, 14, 15, 17, 18, 19, 21, 23};
	float temps[7]={14.7, 16.3, 18.43, 21.09, 17.9, 18.76, 26.7};
	char alpha[8] = {'J', 'B', 'L', 'A', '*', '$', 'H', 'M'};
	*/
	//data structure //array, linked list, stacks, queues, array list
	
	//q6
	/*
	a. valid
	b. invalid, numofelements exceeded subscript given
		int matrix[7] instead of [5]
	 
		int table[7];
		table[0] = 2;
		table[3] = 27;...
	c. valid
	int codes[];
	d. invalid, empty subscript, and with no values given
	*/ 
	
	//q7
	/*
		values of temp[] after first for loop
		temp[0]=-3;
		temp[1]=-1;
		temp[2]=1;
		temp[3]=3;
		temp[4]=5;
		
		values of temp[] after next 3 lines
		temp[0] = 5;
		temp[4] = -1;
		temp[2] = 3 + 5 = 8
		
		temp[0]=5;
		temp[1]=-1;
		temp[2]=8;
		temp[3]=3;
		temp[4]=-1;
	
		actual output:
		-3 -1 1 3 5 
		5 -1 8 3 -1 
		
		b.
		values of temp[] after first for loop:
		temp[0]=2
		temp[1]=4
		temp[2]=6
		temp[3]=11
		temp[4]=18
		
		latest value of temp:
		temp[0] = 64
		temp[1] = 12
		temp[2] = 59
		temp[3] = 11
		temp[4] = 18
		
		actual output:
		2 4 6 11 18 
		64 12 59 11 18 
		
	*/
	
	//q8
	/*
	list[0]=-5
	list[1]=-5
	list[2]=-3
	list[3]=7
	list[4]=5
	list[5]=null
	list[6]=null
	list[7]=null
	list[8]=null
	list[9]=null	
	*/
	
	//q9
	/*
	a. 10
	b. 3
	i=0;
	cout<<i++; //0 //post-increment 
	//i=1
	cout<<++i; //2 //pre-increment
	
	c. 6
	d. 14
	*/
	
//	//q10
//	int nums[5]={1,2,3}; // {1,2,3,0,0}
//	cout<<nums[3];
//	
//	// output: 0

	//q11
	
	//q12
	
//	//q13
//	double array1[4] = {1.2, 3.2, 4.2, 5.2};
//	double array2[4];
//
//	//array2=array1;//invalid
//	
//	//both arrays have same size, same datatypes
//	for(int i=0; i<=3; i++){
//		array2[i] = array1[i];
//	}
//	
//	for(int i=0; i<=3; i++){
//		cout<<array2[i]<<" ";
//	}

	//q14
//	int arr[4];
//	func1(arr); // the address of the first element in array

	// q15 -> passed by reference, not pass by value
	
	//q18
//	int arr[10];
//	int max, min;
//	
//	for(int i=0; i<10; i++){
//		cin>>arr[i];
//	}
//	
//	max=arr[0];
//	min=arr[0];
//	
//	for(int i=0; i<10; i++){
//		if(arr[i]>max)	max=arr[i];
//		if(arr[i]<min) 	min=arr[i];
//	}
//	
//	cout<<"min:"<<min;
//	cout<<"max:"<<max;
	
	
	//q19
	// get numbers
	//	stored in array
	int arr[10];
	for(int i=0; i<10; i++)
		cin>>arr[i];
	
	// initialize lrgest, secLargest = arr[0]
	int largest, secLargest;
	largest = arr[0];
	secLargest = arr[0];
	
	//for loop
	for(int j=0; j<10; j++){
		// even number? 
		if(arr[j]%2==0){
			// arr[i]>lrgest? largest=arr[i]
			if(arr[j]>largest){
				largest = arr[j];
			}	
			//arr[i]>secLargest
				//secLargest = arr[i]
			
			if(arr[j]>secLargest && arr[j]<largest) secLargest = arr[j];
			
			
		}
			
	}
		
	cout<<"Largest: "<<largest<<endl;
	cout<<"Sec largest"<< secLargest;
	
	
	
	return 0;
}

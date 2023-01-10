#include <iostream>
using namespace std;
//week 11 - array

int main(){
	/*
	// data structures - array, linked list, stacks, queues, ...
	// var store multiple value;
//	int var;
//	int arr[10]; //array

	// we does not know the element in array when we create array
	// we need to know what is the size
	int array1[100]; // subscript - declaration
	array1[3] = 4; //index
	// index -> 0, size-1==[0],[1],...,[99]
	
	// we know the elements
	int array2[] = {1,2,3,4,5}
	*/
	
	//q1
	/*
	a. int empNums[100];
	b. float payRates[25];
	c. long miles[14];
	d. string cityName[26];
	e. double lightYears[1000];
	
	
	//q2
	a. subscript is <0
	b. subscript is floating number, instead of integer
	c. size is not defined yet
	
	//q3
	int v[5];
	
	elements inside array:
	values[0] = 1
	values[1] = 2
	values[2] = 3
	values[3] = 4
	values[4] = 5
	
	actual output:
	1
	2
	3
	4
	5
	
	//q4
	int fishCaught[20];
	for(int fisherman = 0; fisherman <20; fisherman++){
		cout<<"How many fishes caught by the fisherman "<<fisherman+1<<"? ";
		cin>>fishCaught[fisherman];
	}
	
	//q5
	a. int ages[10] = {5, 7, 9, 14, 15, 17, 18, 19, 21, 23};
	b. float temps[7] = {14.7, 16.3, 18.43, 21.09, 17.9, 18.76, 26.7};
	c. char alpha[8] = {'J', 'B', 'L', 'A', '*', '$', 'H', 'M'};
	
	//q6
	a. valid
	b. invalid, int matrix[7]
	   valid
	   invalid, int table[7]; table[0] = 2; table[3] = 27; table[5] = 45; table[6] = 39;
	c. valid
	d. invalid, element is not defined / subscript is not specified
	
	//q7
	a. 
	latest value in temp[]:
	temp[0]=5
	temp[1]=-1
	temp[2]=8
	temp[3]=3
	temp[4]=-1
	
	Actual Output:
	-3 -1 1 3 5 
	5 -1 8 3 -1 
	
	b. 
	latest value in temp[]:
	temp[0]=64
	temp[1]=12
	temp[2]=59
	temp[3]=11
	temp[4]=18
	
	Actual Output:
	2 3 6 11 18 
	64 12 59 11 18 
		
	//q8
	i	list[i]
	-------------
	0	-5
	1	-5
	2	-3
	3	7
	4	7
	5	0
	6	0
	7	0
	8	0
	9	0
	
	//q9
	a. 10
	b. 3
	c. 6
	d. 14
	x++; 			++x;
	post-increment, pre-increment
	
	//q10
	0
	
	//q11
	
	//q12
	
	//q13
	double array1[4] = {1.2, 3.2, 4.2, 5.2};
	double array2[4];

	for(int i= 0; i<4; i++)
		array2[i] = array1[i];

	//q14	
	ans: address of first element of array
	
	//q15
	int arr1[] = {1,2,3};
	fun1(arr1);
	
	cout<<endl<<"updated or ori? "<<arr1[0];
	
	ans: pass by reference
	
	//q16
	
	//q17
	
	int avgArray(int[], int);
	
	const int SIZE = 10;
	int userNums[SIZE];
	cout << "Enter 10 numbers: ";
	for (int count = 0; count < SIZE; count++)
	{
		cout << "#" << (count + 1) << " ";
		cin >> userNums[count];
	}
	cout << "The average of those numbers is ";
	cout << avgArray(userNums, SIZE) << endl; //function call
	return 0;
}

int avgArray(int arr[], int size){
	int avg=0;
	
	for(int i =0; i<size; i++)
		avg = avg + arr[i];
	
	avg = avg /size;
	return avg;
	
	//q18

	int arr[10];
	for(int i=0; i<10; i++){
		cout<<"number ("<<(i+1)<<"): ";
		cin>>arr[i];
	}
	
	int largest, smallest;
	largest = arr[0];
	smallest = arr[0];
	
	for(int i=0; i<10; i++){
		if(arr[i]>largest){
			largest=arr[i];
		}
		
		if(arr[i]<smallest){
			smallest=arr[i];
		}
	}
	
	cout<<"Largest\tSmallest\n"<<largest<<"\t"<<smallest;
	
	//q19
	
	//q20	
	double rf[12];
	for(int i=0; i<12; i++){
		cout<<"rainfall for month "<<(i+1)<<": ";
		cin>>rf[i];
	}
	
	double sum, avg, highest, lowest;
	highest=lowest=rf[0];
	sum=avg=0;
	
	for(int i = 0; i<12; i++){
		sum=sum+rf[i];
		if(rf[i]>highest)	highest = rf[i];
		if(rf[i]<lowest) lowest=rf[i];
	}
	
	avg=sum/12.0;
	cout<<"Sum\tAvg\tHighest\tLowest\n"<<sum<<"\t"<<avg<<"\t"<<highest<<"\t"<<lowest;
	
	//q21
	
	//parallel arrays
	string name[5] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
	int numOfJars[5], total=0, highest, lowest;
	
	for(int i=0; i<5; i++){
		cout<<"Enter the num of jar sold for "<<name[i]<<": ";
		cin>>numOfJars[i];
		total = total + numOfJars[i];
	}
	
	highest = lowest = 0;
	
	for(int i=0; i<5; i++){
		if(numOfJars[i]>numOfJars[highest]){
			highest = i;
		}
		
		if(numOfJars[i]<numOfJars[lowest]){
			lowest = i;
		}
		cout<<name[i]<<":\t"<<numOfJars[i]<<endl;
	}
	cout<<"Highest sales product: "<<name[highest]<<", sold"<<numOfJars[highest]<<endl;
	cout<<"Lowest sales product: "<<name[lowest]<<", sold"<<numOfJars[lowest]<<endl;
	
	//q22
	
	//q23
	*/	
	
	
	return 0;
}

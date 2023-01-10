#include <iostream>
using namespace std;

// function prototype
//void displayArray7(int[][7], int); // first parameter -> 2d arrays, 2nd parameter -> num of rows 

int main(){
	int rows=3, cols=12;
//	//1-d array, normal array
//	for(int i=0; i<cols; i++)
//		cout<<"\t["<<i<<"]";
//	for(int i=0; i<1; i++)
//		cout<<"\n\n["<<i<<"]\n\n";
//			
//	//2-d array
//	for(int i=0; i<cols; i++)
//		cout<<"\t["<<i<<"]";
//	for(int i=0; i<rows; i++){
//		cout<<"\n\n["<<i<<"]";
//		for(int j=0; j<cols; j++)
//			cout<<"\t"<<i<<","<<j;
//	}
	
	int b40[12], m40[12], t20[12];
//	for(int index=0; index<12; index++){
//		cout<<b40[index];
//		cout<<m40[index];
//		cout<<t20[index];
//	}
	
//	int population[3][12]; // row0=b40, row1=m40, row=t20
//	//	//2-d array
////	for(int i=0; i<cols; i++)
////		cout<<"\t["<<i<<"]";
////	for(int i=0; i<rows; i++){
////		cout<<"\n\n["<<i<<"]";
////		for(int j=0; j<cols; j++)
////			cout<<"\t"<<i<<","<<j;
////	}
//	
//	for(int row=0; row<rows; row++){
//		for(int col=0; col<cols; col++){
//			cout<<population[row][col];
//		}
//	}

	//q2
	int grades[30][10];
	
	//q3 24 elements => 6rows x 4cols/row
	
	//q4
	/*
	sales[0][0] = 56893.12;
	*/
	
	//q5
	//cout<<sales[5][3];
	
	//q6
	int arr1d[]={1,2,3,4,5,6};
	int arr2d[][5]={
		{12, 24, 32, 21, 42},
		{14, 67, 87, 65, 90},
		{19, 1, 24, 12, 8}
	};
	
	//q8
	int numberArray[9][11]; // 0 - 8
	numberArray[0][0] = 145; // index of array always start from 0
	numberArray[8][10] = 18;
	
	return 0;
}

////function definition
//void displayArray7(int arr[][7], int rows){
//	for(int row=0; row<rows; row++){
//		for(int col=0; col<7; col++){
//			cout<<arr[row][col]<<"\t";
//		}
//		cout<<endl;
//	}
//}

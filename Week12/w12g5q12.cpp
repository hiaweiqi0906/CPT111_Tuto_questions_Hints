#include <iostream>
using namespace std;

//function to check whether matrix is loshu onot
//	after checking, return true/false based on the result
bool checkLs(int[3][3]);
bool checkDuplicate(int[3][3]);
bool checkRows(int[3][3]);
bool checkCols(int[3][3]);
bool checkDiag(int[3][3]);

int main(){
	// create 2 arrays
	int arr[3][3] = {
		{4, 9, 2}, // pigeonhole principle
		{3, 5, 7}, // 
		{8, 1, 6}
	};
	
	// pass that array to the function
	cout<<checkLs(arr); // 1 for true, 0 for false
	// cout the result
	return 0;
}

bool checkDuplicate(int arr[][3]){
	int count[]={0,1,2,3,4,5,6,7,8,9};
	
	for(int row=0; row<3; row++){
		for(int col=0;col<3; col++){
			if(count[ arr[row][col] ] == 0 ){
				cout<<"Invalid, because number "<<arr[row][col]<<" is duplicate\n";
				return false;	
			}else{
				count[ arr[row][col] ] = 0;	
			}	
		}
	}
	return true;
}

bool checkLs(int arr[3][3]){
	// check which number is duplicated
	bool valid=true;
	valid = checkDuplicate(arr);
	
	int sumRow[3]={0,0,0};
	for(int row=0; row<3; row++){
		for(int col=0;col<3; col++){
			sumRow[row] = sumRow[row] + arr[row][col];	
		}
	}
	if(!(sumRow[0]==sumRow[1] && sumRow[1] == sumRow[2] && sumRow[0] == sumRow[2])){
		cout<<"Invalid, because sum of rows are different. \n";
		return false;
	}
	
	int sumCol[3]={0,0,0};
	for(int row=0; row<3; row++){
		for(int col=0;col<3; col++){
			sumCol[col] = sumCol[col] + arr[row][col];
		}
	}
	if(!(sumCol[0]==sumCol[1] && sumCol[1] == sumCol[2] && sumCol[0] == sumCol[2])){
		cout<<"Invalid, because sum of cols are different. \n";
		return false;
	}
	
	int sumDiag[2]={0,0};
	for(int rowAndCol=0; rowAndCol<3; rowAndCol++){
		sumDiag[0] = sumDiag[0] + arr[rowAndCol][rowAndCol];
	}
	
	sumDiag[1] = arr[2][0] + arr[1][1] + arr[0][2];
	// check whether all sumRows == sumCols== sumDiag
	
	if(sumDiag[0] != sumDiag[1]){
		cout<<"Invalid, because sum of diags are different. \n";
		return false;
	}
	
	if(!(sumRow[0]==sumCol[0] && sumCol[0]==sumDiag[0] && sumRow[0]==sumDiag[0])){
		cout<<"Invalid, because sum of diags, cols and rows are different. \n";
		return false;
	}
	
	return true;
}

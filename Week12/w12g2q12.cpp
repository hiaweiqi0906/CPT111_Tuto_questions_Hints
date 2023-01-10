#include <iostream>
using namespace std;

//function to check whether the 2d array given is ls or not
bool checkLs(int[][3], int=3);
bool checkRows(int[][3], int=3);

int main(){
	// 2d array
	int arrayToCheck[3][3] = {
		{4, 9, 2}, 
		{3, 5, 7}, 
		{8, 1, 6}
	};
	
	// TODO: need to pass array to function to check is ls onot
	bool isLs = checkLs(arrayToCheck);
	
	// tell user is ls or not
	cout<<isLs;
	return 0;
}

bool checkLs(int arr[][3], int rows){
	int num1to9[] = {0,1,2,3,4,5,6,7,8,9};
	for(int row=0; row<rows; row++){
		for(int col=0; col<3; col++){
			if( num1to9[ arr[row][col] ] == 0){
				cout<<"Invalid. Duplicate "<< arr[row][col]<<endl<<endl;
				return false;
			}			
			else 
				num1to9[ arr[row][col] ] = 0;
		}
	}
	
	int sumRows[3]={0,0,0};
	for(int row=0; row<rows; row++){
		for(int col=0; col<3; col++){
			sumRows[row] += arr[row][col];
		}
		cout<<"Sum of row "<<row<<" = "<<sumRows[row]<<endl;
	}
	if(!(sumRows[0] == sumRows[1] && sumRows[0] == sumRows[2] && sumRows[2] == sumRows[1])){
		cout<<"Invalid. Sum is not same for rows";
		return false;
	}
	
	int sumCol[3]={0,0,0};
	for(int row=0; row<rows; row++){
		sumCol[0]+=arr[row][0];
		sumCol[1]+=arr[row][1];
		sumCol[2]+=arr[row][2];
	}
	cout<<"Sum of col 0 = "<<sumCol[0]<<endl;
	cout<<"Sum of col 1 = "<<sumCol[1]<<endl;
	cout<<"Sum of col 2 = "<<sumCol[2]<<endl;
	if(!(sumCol[0] == sumCol[1] && sumCol[0] == sumCol[2] && sumCol[2] == sumCol[1])){
		cout<<"Invalid. Sum is not same for cols";
		return false;
	}
	
	int sumDiag[2] = {0, 0};
	for(int rowAndCol = 0; rowAndCol < 3; rowAndCol++){
		sumDiag[0] += arr[rowAndCol][rowAndCol];
	}
	
	sumDiag[1] = arr[0][2] + arr[1][1] + arr[2][0];
	if(!(sumDiag[0] == sumDiag[1] )){
		cout<<"Invalid. Sum is not same for diagonals";
		return false;
	}	
	
	if(!(sumDiag[0] == sumRows[0] && sumDiag[0] == sumCol[0] && sumCol[0] == sumRows[0])){
		cout<<"Invalid. Sum is not same for diagonals, rows and cols";
		return false;
	}	
	
	return true;
}

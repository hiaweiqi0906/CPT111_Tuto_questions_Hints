#include <iostream>
using namespace std;
/*

	int x = 5;
	int y = 10;
	int *ptr = &x;
	int *ptr2 = &y;
	
	int result = doSomething(ptr, ptr2);
*/

int main(){
////	int *ptr = nullptr; // empty pointer
////	int x=10;
////	ptr = &x; // save a variable address
////	*ptr = 20; // change content in this address
////	//           00, 04, 08
////	// int 4 bytes
////	// double 8 bytes
////	int arr[] = {1,2,3};
////	ptr = arr; //0x567d7f //points to the first element of array
////	*(ptr+1) = 999;
////	
////	cout<<*(ptr+1);
//////	ptr = new int[10];
//////	int x=10;
//////	cout<<ptr<<", "<<ptr+10;
//////	delete [] ptr;
//////	cout<<"\n"<<ptr;
//
////	int *ptr = nullptr;
////	int count=7;
////	ptr = &count;
//	
//	//q1
//	//	cout<<&count; // display the address for count var
//	
//	//q2
//	//float *fltPtr = nullptr;
//	
//	//cout<<ptr;
//	
//	//q4
//	// access the content in that address
//	
//	//q5
//	//500 300 140
//	
//	//q6
//	int *ptr = nullptr;
//	int arr[5]={1,2,3,4,5};
//	ptr = arr; // points to the first element
//	//ptr always store address
//	//*ptr always check value in that location
//	//& operator always get the address
//		
////	for(int x=0; x<5; x++)
////		cout<<*(arr+x)<<endl; // subscript notation
//		
//	//q7
//	cout<<ptr;
//	ptr += 10;
//	//ptr add 10(int) to current address
//	// address: 00 -> 10*4 -> 40 decimal number -> 28 hexadecimal
//
//	cout<<endl<<ptr;
	
	//q12
	int arr[5]= {1,2,3,4,5};
	int *ptr = nullptr;
	
	for(int i=0; i<5; i++){
		cout<<*(ptr+i)<<", "<<(ptr+i)<<endl;
	}
	
	return 0;
}


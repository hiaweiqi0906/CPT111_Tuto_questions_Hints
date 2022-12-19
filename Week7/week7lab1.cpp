// preprocessor directives
#include <iostream> 
#include <fstream>

using namespace std;

int main(){
//	// read file, write file, fstream
//	fstream myFile;
//	string filename, line;
//	int i=1;
//	cin>>filename;
//	
//	//open the file
//	myFile.open(filename.c_str(), ios::in);
//	
//	// check opened or not -> null
//	if(!myFile) cout<<"not exist"; 
//	else{
////		while(getline(myFile, line)){ // get the every LINE of doc
////		cout<<i<<". ";
////		if(i%2==1){ //odd number?
////			cout<<line;
////		}
////		i++;
////		cout<<endl;
////		}
//		for(int i=1; getline(myFile, line); i++)
//		{
//					cout<<i<<". ";
//		if(i%2==1){ //odd number?
//			cout<<line;
//		}
//		cout<<endl;			
//		}
//	}
	
	
//	//q2
//	fstream myFile;
//	char enteredKey;
//	string filename, line;
//	int i=1;
//	cin>>filename;
//	
//	//open the file
//	myFile.open(filename.c_str(), ios::in);
//	
//	// check opened or not -> null
//	if(!myFile) cout<<"not exist"; 
//	else{
//		do{
//			int i=1;
//			while(i<=24 && getline(myFile, line)){
//				cout<<line;	
//				cout<<endl;	
//				i++;
//			}
////			//to get 24 lines
////		for(int i=1; ; i++)
////		{
////			
////		}
//		cout<<"enter key to continue...";
//		cin>>enteredKey;
//		}while(enteredKey!='n');
//		
//		
//		
//	}

//	//q3
//	fstream jokeFile, punchLineFile;
//	string line;
//	
//	//open the file
//	jokeFile.open("joke.txt", ios::in);
//	punchLineFile.open("punchline.txt", ios::in);
//	
//	while(getline(jokeFile, line)){
//		cout<<line<<endl<<endl;
//	}
//	
//	while(getline(punchLineFile, line)){
//		
//	}
//	cout<<line<<endl<<endl;

//	//q4
//	fstream myFile;
//	string line; char x;
//	int numOfWords = 0, numOfSentences = 0;
//	
//	myFile.open("p.txt", ios::in);
//	while(myFile.get(x)){ 
//	// get() -> read char
//	// myFile>> -> read string, int, double, separated by space
//	// getline() -> read string, separated by enter
//		if(x == ' '|| x=='\n'){
//			numOfWords++;
//			//i am wei qi. 
//		}
//		
//		if(x == '.'){
//			numOfSentences++;
//			//i am wei qi 4 space = 4 words
//		}
//	}
//	cout<<numOfWords<<" words, "<<numOfSentences<<"sentences. ";

//	//q5
//	fstream myFile;
//	char enteredKey;
//	string filename, line;
//	int i=1, latestLineNumber=1;
//	cin>>filename;
//	
//	//open the file
//	myFile.open(filename.c_str(), ios::in);
//	
//	// check opened or not -> null
//	if(!myFile) cout<<"not exist"; 
//	else{
//		do{
//			int i=1;
//			while(i<=24 && getline(myFile, line)){
//				cout<<latestLineNumber<<":"<<line;	
//				cout<<endl;	
//				i++;
//				latestLineNumber++;
//			}
////			//to get 24 lines
////		for(int i=1; ; i++)
////		{
////			
////		}
//		cout<<"enter key to continue...";
//		cin>>enteredKey;
//		}while(enteredKey!='n');
		
		
//		//q6
//		//open file
//		fstream myFile; string word;
//		int numPrinted=0;
//		myFile.open("p.txt", ios::in);
//		
//		//read every word
//		while(myFile>>word){
//		//if word length >= 10, print out
//		int lengthOfWord = word.length();
//		if(lengthOfWord>=10) {
//			numPrinted++;
//			cout<<word<<" "<<lengthOfWord<<endl;
//		}
//
//		
//		}
//		// print total num printed
//		cout<<numPrinted<<" words printed";
//		
//		myFile.close();
	
	return 0;
}

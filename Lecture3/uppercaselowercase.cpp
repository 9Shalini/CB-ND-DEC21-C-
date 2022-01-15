#include<iostream>
#include<climits>
using namespace std;
int main(){

	// int age=10;
	// if(age<=20&&age>=0){ //>= <= > < -->opeartors work only on numbers

	// }


// 	int a=70;
// // 	int b=80;
// // // explicit type casting
// // 	float x=float(a)/b;
// // 	cout<<x<<endl;

// // ist way
// 	// char ch;
// 	// cin>>ch;//'R' 'f'  '?'
// 	//  // uppercase-->A to Z
// 	// // impilicit type conversion
// 	// if(ch>='A'&&ch<='Z'){
// 	// 	// if(102>=65&&102<=90){
// 	// 	// 	if(82>=65&&82<=90){

// 	// 	cout<<"UPPERCASE"<<endl;
// 	// }
// 	// else if(ch>='a'&&ch<='z'){
// 	// 	// else if(102>=97&&102<=122){
// 	// 	cout<<"lowercase"<<endl;
// 	// }
// 	// else{
// 	// 	cout<<"invalid character"<<endl;
// 	// }


// 	// lower a to z

// 	// invalid character



// 	char ch;
// 	cin>>ch;//'R' 'f'  '?'
// 	 // uppercase-->A to Z
	// impilicit type conversion
// 	if(ch>=65&&ch<=90){
// 		// if(102>=65&&102<=90){
// 		// 	if(82>=65&&82<=90){

// 		cout<<"UPPERCASE"<<endl;
// 	}
// 	else if(ch>=97&&ch<=122){
// 		// else if(102>=97&&102<=122){
// 		cout<<"lowercase"<<endl;
// 	}
// 	else{
// 		cout<<"invalid character"<<endl;
// 	}


	// 3rd way

	// 

	// isupper(caracter check);

	char ch;
	cin>>ch;
	if(isupper(ch)){

		cout<<"UPPERCASE"<<endl;


	}
	else if(islower(ch)){
		cout<<"lowercase"<<endl;


	}
	else{
		cout<<"invalid character"<<endl;
	}







	return 0;
}
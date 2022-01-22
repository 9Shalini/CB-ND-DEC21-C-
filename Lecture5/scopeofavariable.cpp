#include<iostream>
using namespace std;
// global varibales
int a=10;
int b=890;
// int c=63467;
// conatiners
// con
int main(){
	// scope of a variable // 


	// int a=30;
	// local values
	int b=70;
	int c=80;
	if(a==30){
		int b=70;
		int c=60;
		cout<<a<<endl; //10
		cout<<b<<endl; //70 
		cout<<c<<endl; //60 
	}


		
	if(b==70){
		int b=39;
		int d=50;
		int a=546;
		// cout<<a<<endl; //546
		// global 
		// scope resolution opeartor
		cout<<::a<<endl;
		cout<<::b<< endl; //39
		cout<<c<<endl; //80
		cout<<d<<endl; //50 


	}

		cout<<a<<endl; //10
		cout<<b<<endl; //70
		cout<<c<<endl; //80







	return 0;
}
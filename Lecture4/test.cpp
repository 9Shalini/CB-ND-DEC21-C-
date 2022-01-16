#include<iostream>
using namespace std;
int main(){
	// int val=30;
	// // pre inc 
	// int c=++val;


	// cout<<val<<endl;
	// cout<<c<<endl;


	// post inc

	// int val=30;
	// int c=val++;


	// cout<<val<<endl;
	// cout<<c<<endl;


	// pre dec

	// int val=30;
	// int c=--val;


	// cout<<val<<endl;
	// cout<<c<<endl;


	// post dec

	// int val=30;
	
	// int c=val--;


	// cout<<val<<endl;
	// cout<<c<<endl;


	int a=10;
	int b=0;
	int c=1;
	if(a++&&b--&&c++){
		a=a+50;
		b=b+40;
		c=c+10;
	}
	// else if(--a&&b++){
	else if(--a&&++b){
		a=a+30;
		b=b+10;
		c=c+80;
	}
	else if(++a&&--c||++c){
		a=a+60;
		b=b+17;
		c=c+90;
	}
	else{

		a=a+160;
		b=b+117;
		c=c+950;
	}

	cout<<a<<endl;//71 60 72 60  61 71  60. 
	cout<<b<<endl;//17 40 9  40. 39 17  17
	cout<<c<<endl;//92 41 82 11  11 91. 92






	
	return 0;
}
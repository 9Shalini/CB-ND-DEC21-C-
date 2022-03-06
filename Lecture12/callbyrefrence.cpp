#include<iostream>
using namespace std;
fun(int*uptr){
	*uptr=*uptr+20;

	cout<<"*uptr "<<*uptr<<endl;

}

int main(){
	int y=90;
	// int *yptr=&y;
	cout<<"value of y before fun is "<<y<<endl;

	fun(&y);


	cout<<"value of y after fun is "<<y<<endl;




	return 0;	
}


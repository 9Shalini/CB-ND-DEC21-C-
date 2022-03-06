#include<iostream>
using namespace std;
// int sum(int a,int b){
// 	int sum=a+b;
// 	return sum;
// }


// int sum(int a,int b,int c){
// 	int sum=a+b+c;
// 	return sum;
// }

// int sum(int a,int b,int c,int d){
// 	int sum=a+b+c+d;
// 	return sum;
// }

// int sum(int a,int b,int c,int d,int e){
// 	int sum=a+b+c+d+e;
// 	return sum;
// }

int sum(int a=0,int b=0,int c=0,int d=0,int e=0,int f=0){
	int sum=a+b+c+d+e+f;
	return sum;
}
int main(){

	// default arguments
	cout<<sum(3,4)<<endl;
	cout<<sum(3,4,5)<<endl;
	cout<<sum(3,4,5,6)<<endl;
	cout<<sum(3,4,5,6,1)<<endl;
	

	return 0;
}
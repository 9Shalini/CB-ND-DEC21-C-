#include<iostream>
using namespace std;
int fact(int n){
	// step 1 base case
	if(n==0){
		return 1;
	}
	// step 2 recursive case
	// int chotaans=fact(n-1);
	// int badaans=n*chotaans;
	// return badaans;
	// step 3
	// 1 and 2 ki help se sol doondho
	return n*fact(n-1);
	
}
int main(){
	int n;
	cin>>n;//4
	cout<<"fact is : "<<fact(n)<<endl;
	return 0;
}
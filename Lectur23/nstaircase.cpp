#include<iostream>
using namespace std;
int nstaircase(int n){
	// base case
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	// recursive case
	return nstaircase(n-1)+nstaircase(n-2)+nstaircase(n-3);
}

int main(){
	int n;
	cin>>n;
	cout<<"Total ways "<<nstaircase(n)<<endl;//1
	
	return 0;
}
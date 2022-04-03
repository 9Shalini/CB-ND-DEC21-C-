#include<iostream>
using namespace std;
int tocalculatexpown(int x,int n){ //2 4
	// base case
	if(n==0){
		return 1;
	}

	// recursive case
	return x*tocalculatexpown(x,n-1);

}
int main(){
	int x,n;
	cin>>x>>n; //2 4
	cout<<tocalculatexpown(x,n)<<endl;



	return 0;
}
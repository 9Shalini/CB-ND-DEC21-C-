#include<iostream>
using namespace std;
bool isarraysortedornot(int *arr,int n){
	// base case
	if(n==1){
		return true;
	}


	// recursive case
	if(arr[0]<=arr[1]&&isarraysortedornot(arr+1,n-1)){
		return true;
	}
	return false;
}

int main(){
	int n;
	cin>>n;//5
	int arr[100];
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
	}

	if(isarraysortedornot(arr,n)==true){
		cout<<"array is sorted "<<endl;
	}
	else{
		cout<<"array is not sorted "<<endl;

	}
	

	return 0;
}
#include <iostream>
using namespace std;
// bool is7presentornot(int*arr,int n){
// 	// base case
// 	if(n==0){
// 		return false;
// 	}


// 	// recursive case
// 	if(arr[0]==7){
// 		return true;
// 	}
// 	return is7presentornot(arr+1,n-1);


// }

int firstindex(int*arr,int n,int i){
	// base case
	if(i==n){
		return -1;
	}


	// recursive case
	if(arr[i]==7){
		return i;

	}
	return firstindex(arr,n,++i);
}


int lastindex(int*arr,int n,int i){
	// base case
	if(i<0){
		return -1;
	}


	// recursive case
	if(arr[i]==7){
		return i;

	}
	return firstindex(arr,n,i-1);
}

void allindixesof7(int*arr,int n,int i){
	// base case
	if(i==n){
		return;
	}


	// reursive case
	if(arr[i]==7){
		cout<<i<<" ";
	}
	allindixesof7(arr,n,i+1);

}


int main(){
	// int arr[]={6,4,4,2};
	// int n=sizeof(arr)/sizeof(int);
	// if(is7presentornot(arr,n)){
	// 	cout<<"7 Is present"<<endl;
	// }
	// else{
	// 	cout<<"7 Is not present"<<endl;

	// }

// first index of 7
	// 4 7 8 7 3 
// 
	// int arr[]={4,6,4,5,7,8,7,3};
	// int n=sizeof(arr)/sizeof(int);
	// cout<<firstindex(arr,n,0)<<endl;

	// int arr[]={4,17,8,17,3};
	// int n=sizeof(arr)/sizeof(int); //8
	// cout<<lastindex(arr,n,n-1)<<endl;

	int arr[]={4,7,8,7,3,7,7,7,7,7,7,4,5,7};
	int n=sizeof(arr)/sizeof(int); //8
	allindixesof7(arr,n,0);

	


	return 0;
}
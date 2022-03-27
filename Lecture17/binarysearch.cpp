#include<iostream>
#include<cmath>
using namespace std;
bool Binarysearch(int arr[],int s,int e,int key){//4

// loop
	while(s<=e){//1<=1
		int mid=(s+e)/2;//1
	if(arr[mid]==key){
		return true;
	}
	else if(key>arr[mid]){
		s=mid+1;
	}
	else{
		e=mid-1;

	}

	}

	return false;
	


}

https://hack.codingblocks.com/app/contests/2690/1056/problem
int main(){
	int arr[]={1,3,5,6,7,9};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;


	cout<<Binarysearch(arr,0,n-1,key)<<endl;

	if(Binarysearch(arr,0,n-1,key)){
		cout<<"key is present"<<endl;
	}
	else{
		cout<<"key is not present"<<endl;

	}

	
	
	return 0;
}
#include<iostream>
using namespace std;
int binarysearch(int*arr,int key,int s,int e){
	// Base case
	if(s>e){
		return -1;
	}


	// recursive case
	int mid=(s+e)/2;//2
	if(arr[mid]==key){
		return mid;
	}
	else if(arr[mid]<key){
		// s=mid+1;
		return binarysearch(arr,key,mid+1,e);

	}
	else{
		// e=mid-1;
		return binarysearch(arr,key,s,mid-1);

	}

}
int main(){
	
	int arr[]={2,4,5,6,7};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;//6
	cout<<binarysearch(arr,key,0,n-1)<<endl;
	return 0;

}

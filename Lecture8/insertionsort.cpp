#include<iostream>
using namespace std;
int main(){
	// int arr[]={0,5,4,3,2,1};
	int arr[]={4,2,3,7,7,7,1,1,3,5};
	int n=sizeof(arr)/sizeof(int);//5

	// Insertion sort-->Brute force approach
	for(int j=1;j<=n-1;j++){
		int curr=arr[j];
		int i;
		for(i=j-1;i>=0;i--){
			if(curr<arr[i]){
				arr[i+1]=arr[i];
			}
			else{
				break;
			}
		}
		arr[i+1]=curr;
	}
	
	
	
	


//print array
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;


	return 0;

}

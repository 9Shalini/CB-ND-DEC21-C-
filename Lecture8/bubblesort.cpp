#include<iostream>
using namespace std;
int main(){
	// int arr[]={0,5,4,3,2,1};
	int arr[]={5,0,1,2,3};
	int n=sizeof(arr)/sizeof(int);//5

	// bubble sort-->Brute force approach
	// for(int i=0;i<=n-2;i++){
	// 	for(int j=0;j<=n-2;j++){
	// 	if(arr[j]>arr[j+1]){

	// 		// using 3rd variable
	// 		// int x=arr[j];
	// 		// arr[j]=arr[j+1];
	// 		// arr[j+1]=x;
	// 		// // swap
	// 		// swap(arr[j],arr[j+1]);


	// 		// without using extra variable
	// 		// arr[j+1]=arr[j+1]-arr[j];
	// 		// arr[j]=arr[j]+arr[j+1];
	// 		// arr[j+1]=arr[j]-arr[j+1];

	// 		// one line 
	// 		// arr[j],arr[j+1]=arr[j+1],arr[j];
	// 		arr[j+1]=(arr[j]+arr[j+1])-(arr[j]=arr[j+1]);

	// 		// inbuild
	// 		swap(arr[j],arr[j+1]);
	// 	}
	// }

	// }


	// opmised bubble
		// bubble sort-->Brute force approach
	for(int i=0;i<=n-2;i++){
		bool doesswaphappen=false;
		for(int j=0;j<=n-2-i;j++){
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
			doesswaphappen=true;
		}
	}
	if(doesswaphappen==false){
		break;
	}

	}
	


//print array
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;


	return 0;

}

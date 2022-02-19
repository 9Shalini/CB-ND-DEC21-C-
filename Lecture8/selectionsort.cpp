#include<iostream>
using namespace std;
int main(){
	// int arr[]={0,5,4,3,2,1};
	int arr[]={4,2,1,3,5};
	int n=sizeof(arr)/sizeof(int);//5

	// Selection sort-->Brute force approach
	for(int pos=0;pos<=n-2;pos++){
		int min=pos;
		for(int j=pos+1;j<=n-1;j++){
			if(arr[j]<arr[min]){
				min=j;

			}
		}
		swap(arr[pos],arr[min]);

	}
	
	
	


//print array
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;


	return 0;

}

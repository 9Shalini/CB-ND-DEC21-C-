#include<iostream>
#include<cmath>
using namespace std;
// #define ll long long int

int digitsin(int n){
	// 970
	int co=0;

// loop
	while(n>0){
			n=n/10;//970/10-->97/10-->9/10-->0
	co++;//3

	}
	return co;





}
int main(){
	int t;
	cin>>t;
	int arr[100];
	while(t--){
		int n;
		cin>>n;//4
		for (int i = 0; i <n; ++i)
		{
			cin>>arr[i];//54 546 548 60
		}


		for(int k=0;k<=n-2;k++){
			for(int i=0;i<=n-2-k;i++){
				// int x=digitsin(arr[i+1]);
			long long int no1=arr[i]*pow(10,digitsin(arr[i+1]))+arr[i+1];
			long long int no2=arr[i+1]*pow(10,digitsin(arr[i]))+arr[i];
			// if(no1>no2){
			// 	swap(arr[i],arr[i+1]);
			// }
			if(no1<no2){
				swap(arr[i],arr[i+1]);
			}


		}


		}

			for (int i = 0; i <n; ++i)
			{
				cout<<arr[i];
			}
			cout<<endl;

		// for(int j=n-1;j>=0;j--){
		// 	cout<<arr[j];
		// }
		// cout<<endl;


	}
	

	return 0;
}
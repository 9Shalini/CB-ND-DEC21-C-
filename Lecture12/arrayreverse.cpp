#include<iostream>
using namespace std;
void fun(int *a,int n){
	// for(int i=0;i<n;i++){
	// 	// a[i]=a[i]+10;
	// 	*(a+i)=*(a+i)+10;

	// }
	int x=10;
	return x;


}
int main(){


// it works 

	int arr[]={5,4,3,7,8,9};
	int n=sizeof(arr)/sizeof(int);

	fun(arr,n);

	// int i=0;
	// int j=n-1;

	// while(i<j){
	// 	swap(arr[i],arr[j]);
	// 	i++;
	// 	j--;


	// }


	// for(int i=0;i<n;i++){
	// 	cout<<arr[i]<<" "<<endl;
	// }


	cout<<endl;



	



	

	return 0;	
}


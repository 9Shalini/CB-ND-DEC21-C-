#include<iostream>
using namespace std;
void fun(int *a,int n){
	for(int i=0;i<n;i++){
		// a[i]=a[i]+10;
		*(a+i)=*(a+i)+10;

	}

}
int main(){
// it works 

	int arr[]={5,4,3,7,8,9};
	int n=sizeof(arr)/sizeof(int);


	fun(arr,n);

	cout<<arr<<endl;//name of the array

	cout<<&arr[0]<<" "<<arr<<endl;
	cout<<&arr[1]<<" "<<arr+1<<endl;
	cout<<&arr[2]<<" "<<arr+2<<endl;
	cout<<&arr[3]<<" "<<arr+3<<endl;
	cout<<&arr[4]<<" "<<arr+4<<endl;
	cout<<&arr[5]<<" "<<arr+5<<endl;


		cout<<arr[0]<<" "<<*(arr+0)<<endl;
	cout<<arr[1]<<" "<<*(arr+1)<<endl;
	cout<<arr[2]<<" "<<*(arr+2)<<endl;
	cout<<arr[3]<<" "<<*(arr+3)<<endl;
	cout<<arr[4]<<" "<<*(arr+4)<<endl;
	cout<<arr[5]<<" "<<*(arr+5)<<endl;




	

	return 0;	
}


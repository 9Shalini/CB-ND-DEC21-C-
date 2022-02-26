#include<iostream>
#include<climits>
using namespace std;
// vikrant(datatpye  name[])
void vikrant(int a[],int n){
	for(int i=0;i<n;i++){
		a[i]=a[i]+10;
	}

	cout<<"inside fun"<<endl;
	for (int i = 0; i <n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[]={2,3,4,5,6};
	int n=sizeof(arr)/sizeof(int);
	vikrant(arr,n);


	cout<<"inside main"<<endl;
	for (int i = 0; i <n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}




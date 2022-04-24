#include<iostream>
using namespace std;
int main(){
	// sma
	// int a;
	// a=50;


	// dma
	int*ptr=new int;
	*ptr=50;


	delete ptr;
	ptr=NULL;


	// cout<<*ptr<<endl;


	float f;
	f=60.78;
	float*fptr=new float;
	*fptr=60.78;

	cout<<*fptr<<endl;
	delete fptr;
	fptr=NULL;


	// array sma
	// int arr[100];


	// array dma
	int*arrptr=new int[5];
	for(int i=0;i<5;i++){
		// cin>>arrptr[i];
		cin>>*(arrptr+i);
	}


	// print
	for(int i=0;i<5;i++){
		// cout<<arrptr[i];
		cout<<*(arrptr+i)<<" ";
	}
	cout<<endl;


	delete[]arrptr;
	// arrptr=NULL;

	for(int i=0;i<5;i++){
		// cout<<arrptr[i];
		cout<<*(arrptr+i)<<" ";
	}
	cout<<endl;






	


	return 0;
}
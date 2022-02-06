#include<iostream>
using namespace std;
int main(){
	int arr[]={3,1,6,4,2};
	// for(int i=0;i<=9;i++){
	// 	cin>>arr[i];

	// }
	int ts=sizeof(arr)/sizeof(int);
	int key;
	cin>>key; //4
	int j;
	for(j=0;j<=ts-1;j++){ //5
		if(arr[j]==key){
		cout<<"yes element is present at index "<<j<<endl;
		break;

	}



	}

	if(j==ts){
		cout<<"not present"<<endl;
	}

	
	cout<<endl;
	






	return 0;
}
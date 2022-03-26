#include<iostream>
using namespace std;
bool searchin2darraykey(int arr[100][100],int r,int c,int key){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(arr[i][j]==key){
				return true;

			}

		}
	}
	return false;
}
int main(){
	int rows,cols;//
	cin>>rows>>cols;//3 4
	int arr[100][100];

	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cin>>arr[i][j];
		}
	}
	int key;
	cin>>key;//3
	if(searchin2darraykey(arr,rows,cols,key)){
		cout<<"Key is present"<<endl;

	}
	else{

		cout<<"Key is not present"<<endl;

	}

	return 0;
}
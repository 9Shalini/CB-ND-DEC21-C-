#include<iostream>
using namespace std;
int main(){
	int r,c;
	cin>>r>>c;//4 5
	int **arr=new int*[r];

	// arr[0]=new int[c];
	// arr[1]=new int[c];
	// arr[2]=new int[c];
	// arr[3]=new int[c];

	for(int i=0;i<r;i++){
		arr[i]=new int[c];
	}


	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}

// print
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<endl;

	// delete

	for(int i=0;i<r;i++){
		delete[]arr[i];
		arr[i]=NULL;
	}

	delete[]arr;
	arr=NULL;







	


	return 0;
}
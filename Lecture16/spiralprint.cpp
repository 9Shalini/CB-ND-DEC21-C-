#include<iostream>
using namespace std;
void spiralprint(int arr[100][100],int r,int c){
	int sr=0;
	int sc=0;
	int ec=c-1;
	int er=r-1;

// loop
	while(sc<=ec&&sr<=er){

		// 1st row
	for(int i=sc;i<=ec;i++){
		cout<<arr[sr][i]<<" ";

	}
	sr++;

	// last col
	for(int j=sr;j<=er;j++){
		cout<<arr[j][ec]<<" ";
	}
	ec--;
	// last row

	for(int k=ec;k>=sc;k--){
		cout<<arr[er][k]<<" ";
	}
	er--;
	// ist col


	for(int l=er;l>=sr;l--){
		cout<<arr[l][sc]<<" ";
	}
	sc++;



	}
	

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

	spiralprint(arr,rows,cols);

	return 0;
}
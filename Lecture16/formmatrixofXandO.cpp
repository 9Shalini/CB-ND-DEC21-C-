#include<iostream>
using namespace std;
void formmatrixfromXandO(char arr[100][100],int r,int c){
	int sr=0;
	int sc=0;
	int ec=c-1;
	int er=r-1;
	char ch='X';

// loop
	while(sc<=ec&&sr<=er){

		// 1st row
	for(int i=sc;i<=ec;i++){
		arr[sr][i]=ch;

	}
	sr++;

	// last col
	for(int j=sr;j<=er;j++){
		arr[j][ec]=ch;
	}
	ec--;
	// last row

	for(int k=ec;k>=sc;k--){
		arr[er][k]=ch;
	}
	er--;
	// ist col


	for(int l=er;l>=sr;l--){
		arr[l][sc]=ch;
	}
	sc++;


	if(ch=='X'){
		ch='O';
	}
	else{
		ch='X';
	}



	}
	

}
int main(){
	int rows,cols;//
	cin>>rows>>cols;//3 4
	char arr[100][100];

	formmatrixfromXandO(arr,rows,cols);


	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<arr[i][j]<<" ";
		}

		cout<<endl;
	}
	cout<<endl;


	return 0;
}
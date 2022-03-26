#include<iostream>
using namespace std;
void waveprint(int arr[100][100],int r,int c){

	for(int ccn=0;ccn<c;ccn++){
		if(ccn%2==0){
		// even col hai
		// top se bottom jana hai
		for(int crn=0;crn<r;crn++){
			cout<<arr[crn][ccn]<<" ";

		}
		

	}
	else{
		// odd col hai
		// bottom to up
		for(int crn=r-1;crn>=0;crn--){
			cout<<arr[crn][ccn]<<" ";

		}
		


	}




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

	waveprint(arr,rows,cols);

	return 0;
}
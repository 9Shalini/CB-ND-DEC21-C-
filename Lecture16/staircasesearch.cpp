#include<iostream>
using namespace std;
bool staircasesearch(int arr[100][100],int r,int c,int key){

	int si=0;
	int sj=c-1;

// loop
	while(sj>=0&&si<r){
		if(arr[si][sj]==key){
		return true;
	}

	// key choti huvi element si,sj
	else if(key<arr[si][sj]){
		sj--;

	}
	else{
		si++;
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
	cin>>key;//7
	if(staircasesearch(arr,rows,cols,key)){
		cout<<"Key is present"<<endl;

	}
	else{

		cout<<"Key is not present"<<endl;

	}

	return 0;
}
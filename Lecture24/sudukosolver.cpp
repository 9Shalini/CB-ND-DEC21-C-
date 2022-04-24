#include<iostream>
using namespace std;

bool kyamainumdaalsaktihunyanahi(int mat[9][9],int i,int j,int num,int n){
	// to check row
	for(int l=0;l<n;l++){
		if(mat[i][l]==num){
			return false;
		}
	}

	 // to check col
	for(int m=0;m<n;m++){
		if(mat[m][j]==num){
			return false;
		}
	}

	// to check square matrix
	int srt=sqrt(n);//3
	int starti=(i/srt)*srt;
	int startj=(j/srt)*srt;

	for(int si=starti;si<starti+srt;si++){
		for(int sj=startj;sj<startj+srt;sj++){
			if(mat[si][sj]==num){
				return false;
			}
		}
	}


	return true;



}
bool sudukosolver(int mat[9][9],int i,int j,int n){
	// base case
	if(i==n){
		for(int l=0;l<n;l++){
			for(int m=0;m<n;m++){
				cout<<mat[l][m]<<" ";
			}
			cout<<endl;
		}
		return true;
	}
	// if(mat[i][j]!=0&&j<n){
	// 	return sudukosolver(mat,i,j+1,n);
	// }
	
	//  if(j==n){
	// 	return sudukosolver(mat,i+1,0,n);
	// }


	 if(j==n){
		return sudukosolver(mat,i+1,0,n);
	}

	if(mat[i][j]!=0){
		return sudukosolver(mat,i,j+1,n);
	}
	


	


	// recursive case
	for(int num=1;num<=n;num++){
		if(kyamainumdaalsaktihunyanahi(mat,i,j,num,n)){
		mat[i][j]=num;
		bool kyaaageseansmila=sudukosolver(mat,i,j+1,n);
		if(kyaaageseansmila==true){
			return true;
		}
		mat[i][j]=0;


	}

	}
	return false;
	

}

int main(){

int mat[9][9] =
		{{0,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}};


		if(sudukosolver(mat,0,0,9)==true){
			cout<<"suduko sol exist "<<endl;
		}
		else{
			cout<<"suduko sol doesn't  exist "<<endl;
		}


	


	return 0;
}
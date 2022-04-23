#include<iostream>
using namespace std;
int sol[100][100]={0};
int co=0;
bool ratinamaze(char maze[][10],int r,int c,int i,int j){
	// base case
	if(i==r-1&&j==c-1){
		sol[i][j]=1;
		for(int l=0;l<r;l++){
			for(int m=0;m<c;m++){
				cout<<sol[l][m]<<" ";
			}
			cout<<endl;
		}
		co++;

		cout<<endl;

		// return true;
		sol[i][j]=0;
		return false;
	}



	// recursive case
	sol[i][j]=1;
	// condition check karne k lye aage jaa sakte hai
	if(j+1<c&&maze[i][j+1]!='X'){
		// haan aage jaa sakte hai
		bool kyaaageseansmila=ratinamaze(maze,r,c,i,j+1);
		if(kyaaageseansmila==true){
			return true;
		}


	}
	// condition check karne k lye neeche jaa sakte hai
	if(i+1<r&&maze[i+1][j]!='X'){
		// haan neeche jaa sakte hai
		bool kyaneecheseansmila=ratinamaze(maze,r,c,i+1,j);
		if(kyaneecheseansmila==true){
			return true;
		}

	}
	sol[i][j]=0; //bcaktracking
	return false;

}

int main(){
	char maze[][10]={
		"OOOO",
		"OXXX",
		"OOOO",
		"OXOO"

	};
	int r=4;
	int c=4;
	
	ratinamaze(maze,r,c,0,0);

	cout<<"total paths are "<<co<<endl;

	return 0;
}
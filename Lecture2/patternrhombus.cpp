#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//5

	int row=1;

	// 3rd row-->3
	// loop
	while(row<=n){
		// ?===========================================
	// spaces
	int sc=1;
	while(sc<=(n-row)){//5-3-->2
		cout<<" "<<'\t';
	sc=sc+1;//3

	}
	// inc
	int ic=1;
	int sp=row;//3
	while(ic<=row){//4<=3
		cout<<sp<<'\t';
		sp=sp+1;//6
		ic=ic+1;//4
	}
	// dec
	int dc=1;
	int stp=(2*row)-2;//4
	while(dc<=row-1){//3<=2

		cout<<stp<<'\t';
		stp=stp-1;//2

		dc=dc+1;//3

	}

	// ?===========================================


	cout<<endl;
	row=row+1;



	}


	






	return 0;
}
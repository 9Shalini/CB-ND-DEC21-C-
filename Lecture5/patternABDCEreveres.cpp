#include<iostream>
using namespace std;
int main(){
	// n=5


	// row 2

	int n;
	cin>>n;




// 	for(int row=1;row<=n;row++){
// 	// increasing
// 	int in=1;
// 	char sc='A';
// 	while(in<=(n+1)-row){
// 		// task;
// 		cout<<sc; //
// 		in=in+1;//5
// 		sc=sc+1;//65+1-->66-->'B' 66+1-->67 -->'C'+1--->'D'+1-->69-->'E'

// 	}
// // sc-->'E' in=5
// 	// decreasing
// 	sc=sc-1;//'E'-1  69-1-->68 -->D

// 	// char sp=65+(n-row); //68

// 	int anurag=1;
	
// 	while(anurag<=(n+1)-row){
// 		cout<<sc;

// 		// cout<<sp;
// 		anurag=anurag+1;//5
// 		sc=sc-1;//64
// 		// sp=sp-1;

// 	}


// 	cout<<endl;

// 	}









	for(int row=1;row<=n;row++){
	// increasing
	// int in=1;
	// char sc='A';
	// while(in<=(n+1)-row){
		// task;
		// cout<<sc; //
		// in=in+1;//5
		// sc=sc+1;//65+1-->66-->'B' 66+1-->67 -->'C'+1--->'D'+1-->69-->'E'

	// }

	char sc='A';
	for(int in=1;in<=(n+1)-row;in=in+1){
		cout<<sc; //
		sc=sc+1;

	}
// sc-->'E' in=5
	// decreasing
	sc=sc-1;//'E'-1  69-1-->68 -->D

	// char sp=65+(n-row); //68

	// int anurag=1;
	
	// while(anurag<=(n+1)-row){
		// cout<<sc;

		// cout<<sp;
	
		// sc=sc-1;//64
		// sp=sp-1;
		// anurag=anurag+1

	// }


	for(int anurag=1;anurag<=(n+1)-row;anurag=anurag+1){
		cout<<sc;
		sc=sc-1;


	}


	cout<<endl;

	}









	// decreasing


	return 0;
}
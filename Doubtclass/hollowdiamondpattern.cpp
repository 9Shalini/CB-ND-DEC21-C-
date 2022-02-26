#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n==1){
		cout<<"*"<<endl;

	}
	else{
		// for ist row
	for(int c=1;c<=n;c++){
		cout<<'*'<<'\t';//*	 *	*	*	*
	}
	cout<<endl;

	// beech wala kaam 
	// ist part

	for(int row=2;row<=(n/2)+1;row++){
		for(int i=1;i<=((n+1)/2)-row+1;i++){
		cout<<'*'<<'\t';
	}

	for(int j=1;j<=(2*row-3);j++){
		cout<<' '<<'\t';
	}
	for(int i=1;i<=((n+1)/2)-row+1;i++){
		cout<<'*'<<'\t';
	}
	cout<<endl;



	}
	


	// 2nd part

	for(int row=1;row<=(n/2)-1;row++){//3
	for(int i=1;i<=row+1;i++){
		cout<<'*'<<'\t';
	}

	for(int j=1;j<=n-2*(row+1);j++){
		cout<<' '<<'\t';
	}

	for(int i=1;i<=row+1;i++){
		cout<<'*'<<'\t';
	}

	cout<<endl;
}





	// last row 
	for(int c=1;c<=n;c++){
		cout<<'*'<<'\t';//*	 *	*	*	*
	}
	cout<<endl;




	}

	
	return 0;
}
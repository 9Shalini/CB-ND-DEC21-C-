#include<iostream>
using namespace std;
int main(){

	char ch;
	ch=cin.get();//property wo hamari whitespaces ' ','\t','\n'
	int x=0;
	int y=0;

// loop
	// while(ch!='$'){
		while(ch!='\n'){
		if(ch=='S'){
		y=y-1;

	}
	else if(ch=='N'){
		y=y+1;
		
	}
	else if(ch=='E'){
		x=x+1;
	}
	else if(ch=='W'){
		x=x-1;

	}

	
	ch=cin.get();//'$'


	}


	// cout<<"x : "<<x<<endl;//2
	// cout<<"y : "<<y<<endl;//-2
// 0 1
	if(x>=0&&y>=0){
		// i am in ist qudarant
		for(int i=1;i<=x;i++){
			cout<<'E';
		}
		for(int j=1;j<=y;j++){
			cout<<'N';

		}
	}
	else if(x<=0&&y>=0){
		// i am in 2nd qudarant
		for(int i=1;i<=y;i++){
			cout<<'N';
		}
		for(int j=1;j<=abs(x);j++){ //abs(-2)-->2
			cout<<'W';
		}

	}
	else if(x<=0&&y<=0){
		// i am in 3rd qudarant
		for(int i=1;i<=abs(y);i++){
			cout<<'S';
		}
		for(int j=1;j<=abs(x);j++){
			cout<<'W';
		}

	}
	else{
		// i am in 4th qudrant
		for(int i=1;i<=x;i++){
			cout<<'E'; //E
		}
		for(int j=1;j<=abs(y);j++){
			cout<<'S';
		}

	}
	cout<<endl;

	
	



	return 0;
}
#include<iostream>
#include<climits>
using namespace std;
int main(){
	// int a,b,c;
	// // assume every number is diffrent
	// cin>>a>>b>>c;//a-->4 b-->7 c-->3


	// if(a>b and a>c){
	// 	cout<<a<<" is largest"<<endl;//4 is largest
	// 	// cout<<"a is largest"<<endl;// a is largest
	// }
	// else if(b>a and b>c){
	// 	cout<<b<<" is largest"<<endl;//7 is largest

	// }
	// else{
	// 	cout<<c<<" is largest"<<endl;//3 is largest
	// }


	// 7 7 2
	// if(a>b and a>c){
	// 	cout<<a<<endl;//4 is largest
	// 	// cout<<"a is largest"<<endl;// a is largest
	// }
	// else if(b>a and b>c){
	// 	cout<<b<<endl;//7 is largest

	// }
	// else{
	// 	cout<<c<<endl;//3 is largest
	// }
	// int no;

	// int ma=INT_MIN;

	// int i=1;
	// while(i<=3){//4<=3
		// pehla no lelo
		// cin>>no;//5 7 4
		// if(no>ma){
		// 	ma=no;//7
		// }

	// 	i=i+1;

	// }


	// cout<<ma<<endl;


	// a b c


	int max=INT_MIN;//-2^31

int no;
	int c=1;

// loop
// 3 times
	while(c<=3){//1<=3 2<=3 3<=3

		cin>>no;//4
	if(no>max){//7>5 4>7
		max=no; //7
	}

	c=c+1;//4


	}
	
	cout<<max<<endl;

	











	

	return 0;
}
#include<iostream>
using namespace std;
int multiply(int a,int b){
	// base case 
	if(b==0){
		return 0;
	}


	// recursive case
	return a+multiply(a,b-1);
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<"multipliciation is "<<multiply(a,b)<<endl;

	// if(a>0&&b>0||a<0&&b<0){
	// 	cout<<multiply(abs(a),abs(b))<<endl;

	// }
	// else{
	// 	cout<<-1*multiply(abs(a),abs(b));
	
	// }

	// cout<<multiply(a,multiply(b,c));


	return 0;
}
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//5
	int counter=0;


// 
	while(n>0){
		int result=(n&1);//101&1-->1. 10&1-->0 1&1-->1
	if(result==1){
		// last bit set bit
		counter=counter+1;//2
	}

	n=n>>1;//101>>1-->10>>1-->1>>1-->0
	


	}

	cout<<counter<<endl;
	
	
	return 0;
}
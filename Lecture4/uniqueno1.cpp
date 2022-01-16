#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//7
	int result=0;
	int counter=1;
// 
	int num;
	// loop
	while(counter<=n){
		cin>>num;//2
		result=num^result;//2^4-->6

		counter=counter+1;//8



	}


	cout<<"unique no is : "<<result<<endl;
	






	
	return 0;
}
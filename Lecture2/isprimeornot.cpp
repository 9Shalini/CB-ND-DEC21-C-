#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//5

	// 6/2 6/3 6/4 6/5

	// 5/2 5/3 5/4 5/5

	if(n<=1){
		return 0;
	}




	int i=2;


// loop
	while(i<n){
		if(n%i==0){
		// i hai wo factor
		cout<<"Not Prime"<<endl;
		return 0;

	}
	// else{
		i=i+1;//5

	// }


	}

	cout<<"Prime"<<endl;


	return 0;
}
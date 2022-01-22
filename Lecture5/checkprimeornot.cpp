#include<iostream>
using namespace std;
int main(){
	// int n;
	// // condition --> n will be >=2 always
	// cin>>n;//5 5/2 5/3 5/4 2 to n-1

	// if(n<=1){
	// 	cout<<"Not Prime"<<endl;
	// 	return 0;
	// }
// 6 -->6/2 6/3 6/4 6/5
// 5--->5/2 5/3 5/4 




	int no;
	cin>>no; //10
	for(int n=2;n<=no;n++){ //5

	int i=2;
// loop
	while(i<=n-1){ //2<=3
		if(n%i==0){ //4%2
		// cout<<"Not Prime"<<endl;
		break;

	}

		i=i+1;//3

	}
	if(i==n){
			cout<<n<<endl;  //2 3

	}
		// if n is primt tou usko print karo 2 3 5 7


		// agar prime nahi hai tou print nahi karo


	}

	cout<<endl;


// task 2 

	return 0;
}
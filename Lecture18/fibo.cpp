#include<iostream>
using namespace std;
int fibo(int n){
	// if(n<0){
	// 	return -1;
	// }

	// base case
	if(n==0||n==1){
		return n;
	}
	
	return fibo(n-1)+fibo(n-2);


}
int main(){
	int n;
	cin>>n;//4
	cout<<"fibo at position "<<n<<" is : "<<fibo(n)<<endl;
	return 0;
}







// if(n==0){
	// 	return 0;
	// }
	// if(n==1){
	// 	return 1;
	// }


	// recusrsive case
	// int x=fibo(n-1);
	// int y=fibo(n-2);
	// int fans=x+y;
	// return fans;
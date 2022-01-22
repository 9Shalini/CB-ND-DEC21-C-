#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//452 -->254

	int reverse=0;

	// while(n>0){
	// 	int rem=n%10;
	// 	reverse=reverse*10+rem;
	// 	n=n/10;
	// }

	// cout<<reverse<<endl;


	for(;n>0;n=n/10){
		int rem=n%10;
		reverse=reverse*10+rem;

	}
	cout<<reverse<<endl;











	return 0;
}
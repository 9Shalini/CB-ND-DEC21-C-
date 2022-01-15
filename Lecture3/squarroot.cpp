#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//10;
	int i=0;
// integer value 
	while(i*i<=n){ //0*0<=10 .... 9<=10 16<=10
		i=i+1;//4

	}
// i-->4

	i=i-1;
	cout<<"square root of "<<n<<" is "<<i<<endl;

	return 0;
}
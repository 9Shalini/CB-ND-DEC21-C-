#include<iostream>
using namespace std;
int main(){
	int n,times;
	cin>>n>>times;//10 2
	float i=0;
	float inc=1;
	int counter=1;
// loop
// 2baar. 3baar 
	while(counter<=(times+1)){

		while(i*i<=n){ //0*0<=10 .... 9<=10 16<=10
		i=i+inc;//3.1+0.01-->3.17

	}
	i=i-inc;//3.17-0.01-->3.16
	inc=inc/10;//1/10-->0.1/10-->0.01/10-->0.001
	counter=counter+1;


	}
	


	cout<<"square root of "<<n<<" is "<<i<<endl;

	return 0;
}
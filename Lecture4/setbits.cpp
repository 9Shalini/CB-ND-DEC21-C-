#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//8
	int p=1;



	// convert n to binary

// loop
	int result=0;
	while(n>0){
		int rem=n%2;//6%2-->0 3%2-->1 1%2-->1

		result=rem*p+result;//0*1+0-->0 1*10+0-->10 1*100+10-->110
		p=p*10;//1*10--> 10*10-->100 1000

		// n=n/2;//6/2-->3/2-->1/2-->0
		n=n>>1;

	}
	

	int bans=result;//110;


	int counter=0;

// loop
	while(bans!=0){
		int ld=bans%10;//110%10-->11%10-->1. 1%10-->1
	if(ld==1){
		counter=counter+1;//2
	}

	bans=bans/10;//110/10-->11/10-->1/10-->0

	}


	cout<<"count of set bits is "<<counter<<endl;
	

















	
	return 0;
}
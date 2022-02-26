#include<iostream>
#include<climits>
using namespace std;
// datatype nameoffunction(){

// }
// forwared decleration
int fact(int n);

int ncr(int a,int b){
	int fans=(fact(a)/(fact(b)*fact(a-b)));
	return fans;

}
int main(){
	int n,r;
	cin>>n>>r;
	if(n>r){
		cout<<"ncr is "<<ncr(n,r)<<endl;

	}
	else{
		cout<<"invalid"<<endl;
	}


	// ncr=n!/(r!*(n-r)!)

	// cout<<(fact(n)/(fact(r)*fact(n-r)))<<endl;
	
	return 0;
}




int fact(int n){

	int ans=1;
	for(int i=n;i>0;i--){
		ans=ans*i;
	}

	return ans;

}


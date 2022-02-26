#include<iostream>
#include<climits>
using namespace std;
// datatype nameoffunction(){

// }
int fact(int n){

	int ans=1;
	for(int i=n;i>0;i--){
		ans=ans*i;
	}

	return ans;

}
int main(){
	int n;
	cin>>n;
	cout<<"factorial is "<<fact(n)<<endl;

	// ncr=n!/(r!*(n-r)!)
	



	return 0;
}
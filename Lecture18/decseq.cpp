#include<iostream>
using namespace std;
void decseq(int n){//5
	// base case
	if(n==0){
		return;
	}

	// recursive case
	cout<<n<<endl;
	decseq(n-1);



}

void incseq(int n){//3
	// base case
	if(n==0){
		return;
	}
	

	// recursive case
	incseq(n-1);
	cout<<n<<endl;


}
int main(){
	int n;
	cin>>n;//3
	// decseq(n);
	incseq(n);
	return 0;
}


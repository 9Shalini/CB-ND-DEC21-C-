#include<iostream>
using namespace std;
int nstaircase(int n,int k){
	// base case
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}


	// recursive case
	// return nstaircase(n-1)+nstaircase(n-2)+nstaircase(n-3);
	int ans=0;
	for(int i=1;i<=k;i++){
		ans=ans+nstaircase(n-i,k); //0+

	}

	return ans;
	// return nstaircase(n-1)+nstaircase(n-2)+nstaircase(n-3)+nstaircase(n-4);//agar k ki value 4 hoti 

}

int main(){
	int n,k; //4
	cin>>n>>k;
	// if(k>n){
	// 	cout<<" invalid input"<<endl;
	// }
	// else{
		cout<<"Total ways "<<nstaircase(n,k)<<endl;//1

	// }


	
	return 0;
}
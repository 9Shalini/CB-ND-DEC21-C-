#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//6
	int ans=0;
	int arr[100000];
	for(int i=0;i<n;i++){
		cin>>arr[i];//7
		ans=arr[i]^ans;//2
	}

	// ans-->2
	int pos=0;

	int temp=ans;//2

// loop
	while(temp>0){
		if((temp&1)==0){
		pos++;//1
		temp=temp>>1;
	}
	else{
		break;
	}

	}
	


	// loop se bahar 
	// pos-->1

	int mask=1<<pos;//2

	int res=0;
	for(int i=0;i<n;i++){
		if((arr[i]&mask)>0){

			// uss pos pe 1 hai
			res=res^arr[i];//2^2-->0^7-->7
		}
	}

	// res-->7
	int res2=ans^res;
	cout<<min(res,res2)<<" "<<max(res,res2)<<endl;


	
	return 0;
}
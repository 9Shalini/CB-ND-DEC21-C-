#include<iostream>
using namespace std;
int le[1000000],height[1000000],ri[1000000];
int main(){
	int t;
	cin>>t;//2
	while(t--){

		int n;
		cin>>n;//6
		
		for (int i = 0; i <n; ++i)
		{
			cin>>height[i];//3  0  0  2  0  4
		}
		//for left max height
		

		le[0]=height[0];

		for(int i=1;i<n;i++){
			le[i]=max(le[i-1],height[i]);

		}
		ri[n-1]=height[n-1];

		for(int j=n-2;j>=0;j--){
			ri[j]=max(ri[j+1],height[j]);

		}

		int water=0;
		for(int k=0;k<n;k++){
			water=water+min(le[k],ri[k])-height[k];

		}
		cout<<water<<endl;
	}


	return 0;
}
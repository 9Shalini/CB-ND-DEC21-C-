#include <iostream>
using namespace std;
string arr[]={"Zero","one","Two","Three","Four","Five","Six","Seven","Eight","nine"};

void converttowords(int no,int digits){
	// base case
	if(digits==0){
		return;
	}


	// recursive case
	int x=no/(pow(10,digits-1));
	cout<<arr[x%10]<<" ";
	converttowords(no,digits-1);


}

int ftocalulatedigits(int no){
	// 2048
	int cou=0;

// loop
	while(no>0){
		cou++;//4
		no=no/10;//2048/10-->204/10-->20/10-->2/10-->0

	}
	return cou;
	

}

int main(){
	// condition no>0
	int no;
	cin>>no;//2048
	int digits=ftocalulatedigits(no);//4


	converttowords(no,digits);
	


	return 0;
}
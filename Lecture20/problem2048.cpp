#include <iostream>
using namespace std;
string arr[]={"Zero","one","Two","Three","Four","Five","Six","Seven","Eight","nine"};

// // void converttowordsreverse(int no){
// // 	// base case
// // 	if(no==0){
// // 		return;
// // 	}


// // 	// recursive case
// 	int digit=no%10;//8
// 	cout<<arr[digit]<<" ";//Eight 
// 	converttowordsreverse(no/10);


// // }

void converttowords(int no){
	// base case
	if(no==0){
		return;
	}


// 	// recursive case
	converttowords(no/10);
	int digit=no%10;//8
	cout<<arr[digit]<<" ";//Eight 
	


}



int main(){
	// condition no>0
	int no;
	cin>>no;//2048

	converttowords(no);
	


	return 0;
}
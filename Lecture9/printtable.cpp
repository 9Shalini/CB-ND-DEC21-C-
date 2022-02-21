#include<iostream>
#include<climits>
using namespace std;
// void printtable(){
// 	int initial,final,step;
// 	cin>>initial>>final>>step;
// 	int fer=initial;//0


// 	while(fer<=final){
// 		int cel=(5.0/9.0)*(fer-32);
// 		cout<<fer<<"     "<<cel<<endl; //0       -17
// 		fer=fer+step;//280+20--> 300 +20-->320

// 	}


// }

void printtable(int initial,int final,int step){
	
	int fer=initial;//0


	while(fer<=final){
		int cel=(5.0/9.0)*(fer-32);
		cout<<fer<<"     "<<cel<<endl; //0       -17
		fer=fer+step;//280+20--> 300 +20-->320

	}


}
int main(){
	int initial,final,step;
	cin>>initial>>final>>step;
	printtable(initial,final,step);
	
	return 0;
}
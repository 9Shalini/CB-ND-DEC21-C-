#include<iostream>
#include<climits>
using namespace std;
int main(){
	int initial,final,step;
	cin>>initial>>final>>step;


	// initial=0;
	// final=300;
	// step=20;


	int fer=initial;//0

// loop
	while(fer<=final){
		// int/int-->int //5/9 -->0.5
		// int cel=(5/9)*(fer-32);//-17 -6.....148
		// int cel=0*(fer-32);
		// type conversion
		// explicit type conversion/type casting
		// // float/int-->float
		// int cel=(5.0/9)*(fer-32);


		// // int/float-->float
		// int cel=(5/9.0)*(fer-32);

		// float/float-->float
		int cel=(5.0/9.0)*(fer-32);


		// float cel=(5.0/9.0)*(fer-32);







		cout<<fer<<"     "<<cel<<endl; //0       -17


		fer=fer+step;//280+20--> 300 +20-->320

	}



	// 
	





	return 0;
}
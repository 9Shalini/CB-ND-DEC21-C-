#include<iostream>
using namespace std;
int main(){
	// int age=10;
	// if(age==10){
	// 	cout<<"age is 10"<<endl;
	// }
	// else{
	// 	cout<<"age is not 10"<<endl;

	// }

	// // syntax
	// // condition?statement1:statement2;
	// age==10?cout<<"age is 10"<<endl:cout<<"age is not 10"<<endl;

	int age=30;
	if(age==10){
		if(age>30){
			cout<<"age is > than 30"<<endl;

		}
		else{
			cout<<"age is < than 30"<<endl;

		}
		
	}
	else{
		if(age>=60){
			cout<<"age is >= 60"<<endl;

		}
		else{
			cout<<"age is <= 60"<<endl;

		}
		

	}

	// syntax
	// condition?statement1:statement2;
	(age==10)?age>30?cout<<"age is > than 30"<<endl:cout<<"age is < than 30"<<endl:age>=60?cout<<"age is >= 60"<<endl:cout<<"age is <= 60"<<endl;


	return 0;
}
#include<iostream>
using namespace std;
// syntax

// return type namofthefuntion(){
// 	// task

// }
// no arguments and no return
void printsenetence(){
		cout<<"i am a teacher"<<endl;
	cout<<"i am a teacher "<<endl;
	cout<<"mai jukega nahi"<<endl;

}
// no arguments but with return
int sumoftwono(){

	// task
	int a,b;
	cin>>a>>b;//10 50
	int sum=a+b;
	cout<<sum<<endl;//60
	return sum;
}
// with arguments and no return
void difference(int kriti,float mayank){
	// 90-38.6-->51.4
	float diff=kriti-mayank;
	cout<<diff<<endl;

}

// with arguments with return;
int divide(int a,int b){
	// 90-38.6-->51.4
	int div=a/b;

	return div;

}
int main(){
	// task 1
	// syantax
	// functionname();
	sumoftwono();
		printsenetence();
		printsenetence();
		printsenetence();
		difference(90,38.6);
		cout<<divide(60,6)<<endl;//10

		
	// cout<<"i am a teacher"<<endl;
	// cout<<"i am a teacher "<<endl;
	// cout<<"mai jukega nahi"<<endl;
	// cout<<"i am a teacher"<<endl;
	// cout<<"i am a teacher "<<endl;
	// cout<<"mai jukega nahi"<<endl;
	// cout<<"i am a teacher"<<endl;
	// cout<<"i am a teacher "<<endl;
	// cout<<"mai jukega nahi"<<endl;






	return 0;
}
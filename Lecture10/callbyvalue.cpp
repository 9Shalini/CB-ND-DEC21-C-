#include<iostream>
#include<climits>
using namespace std;
void fun(int a){
	a=a+90;
	cout<<"value of a in fun is "<<a<<endl;

}
int main(){
	int a=10;
	cout<<"value of a is "<<a<<endl;//10
	fun(a);
	cout<<"value of a after fun is "<<a<<endl;
	return 0;
}





#include<iostream>
using namespace std;
int main(){

	// 1.sizeof(datatype) //bytes

	// cout<<sizeof(int)<<endl;//4
	// cout<<sizeof(char)<<endl;//1
	// cout<<sizeof(float)<<endl;//4
	// cout<<sizeof(bool)<<endl;//1
	// cout<<sizeof(double)<<endl;//8



	// 2. sizeof(name of variable)

	int a=10;
	float f=54.947;
	char ch='F';
	double d=6345.3423;

	bool israining=true;


	// cout<<sizeof(a)<<endl;//4
	// cout<<sizeof(f)<<endl;//4
	// cout<<sizeof(ch)<<endl;//1
	// cout<<sizeof(d)<<endl;//8
	// cout<<sizeof(israining)<<endl;//1





	// 3. sizeof(value)

	cout<<sizeof(10)<<endl;//4
	cout<<sizeof('G')<<endl;//1

	cout<<sizeof(true)<<endl;//1
	cout<<sizeof(56.79)<<endl;//8




	return 0;
}
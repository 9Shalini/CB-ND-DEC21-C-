#include<iostream>
using namespace std;
int main(){
	// int a=10;//4
	// float t=96.6;//4
	// double d=78.3654;//8

	// cout<<"value of a is "<<a<<endl;
	// cout<<"value of t is "<<t<<endl;
	// cout<<"value of d is "<<d<<endl;

	// cout<<"size of a is "<<sizeof(a)<<endl;//4
	// cout<<"size of t is "<<sizeof(t)<<endl;//4
	// cout<<"size of d is "<<sizeof(d)<<endl;//8


	// cout<<"address of a is "<<&a<<endl;
	// cout<<"address of t is "<<&t<<endl;
	// cout<<"address of d is "<<&d<<endl;


	// cout<<"size of &a is "<<sizeof(&a)<<endl;//
	// cout<<"size of &t is "<<sizeof(&t)<<endl;//
	// cout<<"size of &d is "<<sizeof(&d)<<endl;//


	// char ch='r';

	// cout<<"value of ch is "<<ch<<endl;//r

	// cout<<"size of ch is "<<sizeof(ch)<<endl;//1

	// cout<<"address of ch is "<<&ch<<endl;//hexadecimal
	// cout<<"size of &ch is "<<sizeof(&ch)<<endl;//8

	// fooling of compiler
	// cout<<"address of ch is "<<(int*)&ch<<endl;//hexadecimal

	// cout<<"address of ch is "<<(float*)&ch<<endl;//hexadecimal
	// cout<<"address of ch is "<<(double*)&ch<<endl;//hexadecimal
	// cout<<"address of ch is "<<(void*)&ch<<endl;//hexadecimal


	int x=30;//4
	float f=90.36;//4

	double d=67.32;
	// double d=78.3654;//8

	int*xptr=&x;
	float*fptr=&f;
	double *dptr=&d;


	cout<<"dptr is "<<dptr<<endl;
	cout<<"dptr+1 is "<<dptr+1<<endl;
	cout<<"dptr+2 is "<<dptr+2<<endl;

	// double* dptr=&d;
	// char ch='y';
	// char*chptr=&ch;

	// cout<<chptr<<endl;

	// cout<<"value of xptr is "<<xptr<<endl;
	// cout<<"value of fptr is "<<fptr<<endl;
	// cout<<"value of &x is "<<&x<<endl;
	// cout<<"value of &f is "<<&f<<endl;

	// cout<<*xptr<<endl;//derefrence 

	// cout<<*fptr<<endl;

	// cout<<*(&x)<<endl;//derefrence 

	// cout<<*(&f)<<endl;


	// *xptr-->equal to x
	// x=x+10;
	// x=*xptr+10;
	// *xptr=*xptr+10;

	// cout<<*xptr<<endl;


	// cout<<"xptr is "<<xptr<<endl;
	// cout<<"xptr+1 is "<<xptr+1<<endl;
	// cout<<"xptr+2 is "<<xptr+2<<endl;
	// cout<<"xptr+3 is "<<xptr+3<<endl;











	return 0;
}
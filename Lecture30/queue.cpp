#include<iostream>
using namespace std;
class Queue{
	int *arr;
	int cs;
	int ts;
	int f;
	int r;
public:
	Queue(int size=5){
		// int*arr=new int[size]
		arr=new int[size];
		cs=0;
		ts=size;
		f=0;
		r=size-1;


	}
	// push
	void push(int ele){
		if(cs<ts){
			r=(r+1)%ts;//0
		arr[r]=ele;
		cs++;

		}
		else{
			cout<<"overflow"<<endl;
		}
		


	}

	// pop
	void pop(){

		if(cs>0){
			f=(f+1)%ts;
		cs--;

		}
		else{
			cout<<"underflow"<<endl;
		}
		

	}


	// front
	int front(){
		return arr[f];
	}


	// empty
	bool empty(){
		if(cs==0){
			return true;
		}
		else{
			return false;
		}
	}

	// size
	int size(){
		return cs;
	}
};
int main(){
	// Queue 
	Queue q;
	q.push(3);
	q.push(53);
	q.push(4);
	q.push(7);
	q.push(1);
	// q.pop();
	q.push(77);//overflow


while(!q.empty()){
	cout<<q.front()<<" ";
	q.pop();



}
	



	


	return 0;
}
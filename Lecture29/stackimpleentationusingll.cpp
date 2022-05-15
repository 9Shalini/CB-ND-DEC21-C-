#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node*next;

	// constructor
	node(int d){
		data=d;
		next=NULL;

	}
};
class stack{
	node*head;
	int l;
public:

	// push
	stack(){
		head=NULL;
		l=0;

	}


	void push(int data){
	node*n=new node(data);
	// case 1 --bith head and tail are NULL
	if(head==NULL){
		head=n;
		
	}
	else{
		n->next=head;
		head=n;
	}
	l++;

}


	// pop

void pop(){
	// if ll is empty
	if(head==NULL){
		return;
	}
	// if only 1 node is there
	else if(head->next==NULL){
		delete head;
		head=NULL;
		
	}
	// multiple nodes

	else{
		node*temp=head;
		head=head->next;
		delete temp;
		temp=NULL;

	}
	l--;


}




	// empty
bool empty(){
	if(l==0){
		return true;
	}
	else{
		return false;
	}
}


	// top
int top(){
	return head->data;
}

	// size
int size(){
	return l;
}

};
int main(){
	stack s;
	s.push(2);
	s.push(6);
	s.push(9);
	s.push(16);

// loop
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;


	return 0;
}
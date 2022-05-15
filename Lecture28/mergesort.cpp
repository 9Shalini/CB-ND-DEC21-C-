#include<iostream>
using namespace std;
// self refrential class 
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

void print(node*head){
	
	while(head!=NULL){
		cout<<head->data<<" ";
	head=head->next;

	}
	cout<<endl;	
}

bool iscyclicornot(node*head){
	node*slow=head;
	node*fast=head;

while(fast!=NULL&&fast->next!=NULL){
	slow=slow->next;
	fast=fast->next->next;
	if(slow==fast){
		return true;
	}
		

	}
	return false;

	

}

int lengthofll(node*head){
	int cnt=0;

	while(head!=NULL){
		cnt++;
	head=head->next;

	}
	return cnt;
	
}
void insertattail(node*&head,node*&tail,int data){
	node*n=new node(data);
	if(head==NULL){
		head=n;
		tail=n;

	}
	else{
		tail->next=n;
		tail=n;
	}
}

node*mergetowll(node*head1,node*head2){

	// base case 
	if(head1==NULL){
		return head2;
	}
	if(head2==NULL){
		return head1;
	}

	// recursive case
	if(head1->data<head2->data){
		node*newhead=head1;
		newhead->next=mergetowll(head1->next,head2);
		return newhead;
	}
	else{
		node*newhead=head2;
		newhead->next=mergetowll(head1,head2->next);
		return newhead;
	}
}

// to get ist mid point in even length ll 
node* midpointofll(node*head){
	node*slow=head;
	node*fast=head->next;
// loop
	while(fast!=NULL&&fast->next!=NULL){
		slow=slow->next;
	fast=fast->next->next;

	}
	return slow;
}
node*mergesort(node*head1){
	// base case
	if(head1==NULL||head1->next==NULL){
		return head1;
	}
	// recursive case
	node*m=midpointofll(head1);
	node*head2=m->next;
	m->next=NULL;
	head1=mergesort(head1);
	head2=mergesort(head2);
	node*newhead=mergetowll(head1,head2);
	return newhead;

}
void createcycle(node*head1,node*tail1){
	tail1->next=head1->next->next;
}

void breakcycle(node*head){
	if(head->next==NULL){
		return;
	}
	// to check whether cycle is present or not
	node*slow=head;
	node*fast=head;

	bool iscycle=false;

	while(fast!=NULL&&fast->next!=NULL){
		slow=slow->next;
	fast=fast->next->next;
	if(slow==fast){
		// yes cycle is present
		iscycle=true;

		break;
	}

	}
	if(iscycle){
		slow=head;

	while(slow->next!=fast->next){
		slow=slow->next;
	fast=fast->next;

	}
	fast->next=NULL;


	}	

}
int main(){
	node*head1=NULL;
	node*tail1=NULL;
	int n,data;
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		
		cin>>data;//1 2 3 4 5 6 7 8 
		insertattail(head1,tail1,data);
	}

	if(iscyclicornot(head1)){
		cout<<"yes cyclic"<<endl;
	}
	else{
		cout<<"Not cyclic"<<endl;

	}

	createcycle(head1,tail1);
	// print(head1);

	breakcycle(head1);
	print(head1);


	
	return 0;
}




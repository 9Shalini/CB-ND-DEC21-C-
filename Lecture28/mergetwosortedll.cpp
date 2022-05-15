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

void bubblesorll(node*head){
	for(int i=0;i<=lengthofll(head)-2;i++){
		for(node*temp=head;temp->next!=NULL;temp=temp->next){
			if(temp->data>temp->next->data){
				swap(temp->data,temp->next->data);
			}	
	}
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
int main(){
	node*head1=NULL;
	node*tail1=NULL;
	node*head2=NULL;
	node*tail2=NULL;

	int n,data;
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		
		cin>>data;//9 3 6 1 4
		insertattail(head1,tail1,data);
	}

	int m;
	cin>>m;
	for (int i = 0; i <m; ++i)
	{
		
		cin>>data;//9 3 6 1 4
		insertattail(head2,tail2,data);
	}
	 print(head1);
	 print(head2);

	 node*newhead=mergetowll(head1,head2);
	 print(newhead);

	return 0;
}




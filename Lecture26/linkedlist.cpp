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
void insertatfront(node*&head,node*&tail,int data){
	node*n=new node(data);
	// case 1 --bith head and tail are NULL
	if(head==NULL&&tail==NULL){
		head=n;
		tail=n;
	}
	else{
		n->next=head;
		head=n;
	}

}

// void print(node*head){
// 	node*temp=head;//2000
// // loop
// 	while(temp!=NULL){
// 		cout<<temp->data<<" ";
// 	temp=temp->next;

// 	}
// 	cout<<endl;	
// }


void deleteathead(node*&head,node*&tail){
	// if ll is empty
	if(head==NULL&&tail==NULL){
		return;
	}
	// if only 1 node is there
	else if(head->next==NULL){
		delete head;
		head=NULL;
		tail=NULL;
	}
	// multiple nodes

	else{
		node*temp=head;
		head=head->next;
		delete temp;
		temp=NULL;

	}


}


void print(node*head){
	
	while(head!=NULL){
		cout<<head->data<<" ";
	head=head->next;

	}
	cout<<endl;	
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
int lengthofll(node*head){
	int cnt=0;

	while(head!=NULL){
		cnt++;
	head=head->next;

	}
	return cnt;
	
}
int lenrec(node*head){
	// base case
	if(head==NULL){
		return 0;
	}


	// recursive case
	return lenrec(head->next)+1;
}
void insertatanyposition(node*&head,node*&tail,int data,int pos){
	if(pos==0){
		insertatfront(head,tail,data);
	}
	else if(pos>=lengthofll(head)){
		insertattail(head,tail,data);
	}
	else{
		node*n=new node(data);
		node*temp=head;
		for(int jump=1;jump<=pos-1;jump++){
			temp=temp->next;
		}
		n->next=temp->next;
		temp->next=n;

	}

}
int main(){
	// node n1(8);
	// node n2(4);
	// n1.next=&n2;

	// cout<<n1.data<<" "<<(*n1.next).data<<endl;
	// cout<<n1.data<<" "<<n1.next->data<<endl;


	node*head=NULL;
	node*tail=NULL;

	insertatfront(head,tail,9);
	insertatfront(head,tail,12);
	insertatfront(head,tail,3);
	// print(head);
	// print(head);
	insertattail(head,tail,5);
	insertattail(head,tail,15);
	// print(head);
	insertatanyposition(head,tail,80,3);
	print(head);
	deleteathead(head,tail);
	print(head);


	// cout<<lenrec(head)<<endl;



	return 0;
}
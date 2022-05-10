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



void deleteattail(node*&head,node*&tail){
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

		while(temp->next!=tail){
			temp=temp->next;

		}
		delete tail;
		temp->next=NULL;
		tail=temp;
		

	}


}
int lengthofll(node*head);


void deleteatanyposition(node*&head,node*&tail,int pos){
	if(pos==0){
		deleteathead(head,tail);
	}
	else if(pos>=lengthofll(head)){
		deleteattail(head,tail);
	}
	else{
		
		node*temp=head;
		for(int jump=1;jump<=pos-1;jump++){
			temp=temp->next;
		}
		node*x=temp->next;
		temp->next=x->next;
		delete x;
		x=NULL;

	}

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

bool searchinll(node*head,int key){


	// loop
	while(head!=NULL){
		if(head->data==key){
		return true;
	}
	head=head->next;

	}
	return false;
	

}

bool searchinllrec(node*head,int key){
	//base case	
	if(head==NULL){
		return false;
	}


	// recursive case
	if(head->data==key){
		return true;
	}
	return searchinllrec(head->next,key);


}

// int midpointofll(node*head){
// 	node*slow=head;
// 	node*fast=head;


// // loop
// 	while(fast!=NULL&&fast->next!=NULL){
// 		slow=slow->next;
// 	fast=fast->next->next;

// 	}
// 	return slow->data;
	

// }


// to get ist mid point in even length ll 
int midpointofll(node*head){
	node*slow=head;
	node*fast=head->next;
// loop
	while(fast!=NULL&&fast->next!=NULL){
		slow=slow->next;
	fast=fast->next->next;

	}
	return slow->data;
}

// reverseall
node*reverseall(node*head){
	node*current=head;
	node*prev=NULL;

	// loop
	while(current!=NULL){
		node*aglanode=current->next;
	current->next=prev;
	prev=current;
	current=aglanode;


	}
	 return prev;

}



int main(){
	// node n1(8);
	// node n2(4);
	// n1.next=&n2;

	// cout<<n1.data<<" "<<(*n1.next).data<<endl;
	// cout<<n1.data<<" "<<n1.next->data<<endl;


	node*head=NULL;
	node*tail=NULL;

	int n,data;
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		
		cin>>data;
		insertatfront(head,tail,data);
	}

	// insertatfront(head,tail,9);
	// insertatfront(head,tail,12);
	// insertatfront(head,tail,3);
	// // print(head);
	// // print(head);
	// insertattail(head,tail,5);
	// insertattail(head,tail,15);
	// // print(head);
	// insertatanyposition(head,tail,80,3);
	// print(head);
	// deleteathead(head,tail);
	print(head);

	// deleteattail(head,tail);
	// print(head);
	// deleteatanyposition(head,tail,2);
	// print(head);
	// int key;
	// cin>>key;//20

	// if(searchinllrec(head,key)){
	// 	cout<<"key is present"<<endl;

	
	// }
	// else{
	// 	cout<<"key is not present"<<endl;

	
	// }
	 print(head);

	 cout<<"mid point is : "<<midpointofll(head)<<endl;


	// cout<<lenrec(head)<<endl;
	 node*newhead=reverseall(head);
	 print(newhead);




	return 0;
}
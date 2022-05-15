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
int main(){
	node*head=NULL;
	node*tail=NULL;

	int n,data;
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		
		cin>>data;//9 3 6 1 4
		insertattail(head,tail,data);
	}
	 print(head);
	 bubblesorll(head);

	  print(head);




	return 0;
}




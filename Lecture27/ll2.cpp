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


void print(node*head){
	
	while(head!=NULL){
		cout<<head->data<<" ";
	head=head->next;

	}
	cout<<endl;	
}

int kthnodefromend(node*head,int k){
	node*p1=head;
	node*p2=head;

	for(int step=1;step<=k;step++){
		p1=p1->next;
	}

while(p1!=NULL){

	p1=p1->next;
	p2=p2->next;


}
return p2->data;
}




int main(){
	node*head=NULL;
	node*tail=NULL;

	int n,data;
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		
		cin>>data;
		insertatfront(head,tail,data);
	}
	int k;
	cin>>k;
	print(head);
	cout<<"kthnodefromend is: "<<kthnodefromend(head,k);
	// print(head); 
	




	return 0;
}
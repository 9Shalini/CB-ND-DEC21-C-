#include<iostream>
#include<queue>
using namespace std;
class node{
	public:
	int data;
	node*left;
	node*right;

	// constructor
	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};

int height(node*root){
	// base case
	if(root==NULL){
		return 0;
	}
	// recursive case

	return max(height(root->left),height(root->right))+1;

}
node*insertinbst(node*root,int data){
	if(root==NULL){
		root=new node(data);
		return root;
	}

	if(data<=root->data){
		root->left=insertinbst(root->left,data);
	}
	else{
		root->right=insertinbst(root->right,data);
	}
	return root;
}
node*createbst(){
	node*root=NULL;

	int data;
	// loop
	cin>>data;//8
	// loop
	while(data!=-1){
		root=insertinbst(root,data);
	cin>>data;//4


	}
	return root;
	
}

void printlevelwise(node*root){
	queue<node*>q;
	q.push(root);
	q.push(NULL);


// loop
	while(!q.empty()){
		node*x=q.front();
	q.pop();
	if(x==NULL){
		cout<<endl;
		if(!q.empty()){
			q.push(NULL);
		}

	}
	else{
		cout<<x->data<<" ";//8
		if(x->left!=NULL){
			q.push(x->left);

		}
		if(x->right!=NULL){
			q.push(x->right);
			
		}


	}


	}
	

}
class linkedlist{
public:
	node*head;
	node*tail;
	linkedlist(){
		head=NULL;
		tail=NULL;
	}
};
linkedlist convertbsttosortedll(node*root){
	linkedlist l;
	// case 1 there is no lst and no rst
	if(root->left==NULL&&root->right==NULL){
		l.head=root;
		l.tail=root;
		// return l;

	}
	// case 2 only lst exist
	else if(root->left!=NULL&&root->right==NULL){
		linkedlist l1=convertbsttosortedll(root->left);
		l1.tail->right=root;
		l.head=l1.head;
		l.tail=root;
		// return l;

	}

	// case 3 only rst exist
	else if(root->left==NULL&&root->right!=NULL){
		linkedlist l2=convertbsttosortedll(root->right);
		root->right=l2.head;
		l.head=root;
		l.tail=l2.tail;
		// return l;

	}
	else{
		// if both lst and rst exist
		linkedlist l1=convertbsttosortedll(root->left);
		linkedlist l2=convertbsttosortedll(root->right);
		l1.tail->right=root;
		root->right=l2.head;
		l.head=l1.head;
		l.tail=l2.tail;
		// return l;

	}
	return l;


}
void printll(node*head){

	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->right;

	}
	cout<<endl;
	

}
int arr[]={1,2,4,5,7,8,9,11,12,14,15,16};

node*createbstusingsortedarray(int s,int e){
	if(s>e){
		return NULL;
	}



	int mid=(s+e)/2;//3
	node*root=new node(arr[mid]);
	root->left=createbstusingsortedarray(s,mid-1);
	root->right=createbstusingsortedarray(mid+1,e);
	return root;


}

node* deleteinbst(node*root,int key){ //8
	// case 1 key lies in lst
	if(key<root->data){
		root->left=deleteinbst(root->left,key);
		return root;

	}
	// case 1 key lies in rst
	else if(key>root->data){
		root->right=deleteinbst(root->right,key);
		return root;

	}
	else{
		// root has no child
		if(root->left==NULL&&root->right==NULL){
			delete root;
			return NULL;
		}
		else if(root->left!=NULL&&root->right==NULL){
			node*temp=root->left;
			delete root;
			root=NULL;
			return temp;
		}
		else if(root->left==NULL&&root->right!=NULL){
			node*temp=root->right;
			delete root;
			root=NULL;
			return temp;
		}
		else{
			// /root 2 chidrem
			// node*replace=root->right;
			// while(replace->left!=NULL){
			// 	replace=replace->left;

			// }
			// swap(replace->data,root->data);
			// root->right=deleteinbst(root->right,key);
			// return root;

			node*replace=root->left;
			while(replace->right!=NULL){
				replace=replace->right;

			}
			swap(replace->data,root->data);
			root->left=deleteinbst(root->left,key);
			return root;

		}

	}

}
void rightview(node*root,int level,int &maxlttn){
	if(root==NULL){
		return;
	}

	// l 1 ml-->0 
	// l 2 ml-->1
	// l 3 ml-->2
	// l 4 ml-->3
	if(level>maxlttn){
		cout<<root->data<<" ";
		maxlttn++;//5

	}
	

	rightview(root->right,level+1,maxlttn);
	rightview(root->left,level+1,maxlttn);


}

void leftview(node*root,int level,int &maxlttn){
	if(root==NULL){
		return;
	}

	// l 1 ml-->0 
	// l 2 ml-->1
	// l 3 ml-->2
	// l 4 ml-->3
	if(level>maxlttn){
		cout<<root->data<<" ";
		maxlttn++;//5

	}
	
	leftview(root->left,level+1,maxlttn);
	leftview(root->right,level+1,maxlttn);
	


}
bool isbstornot(node*root,int min=INT_MIN,int max=INT_MAX){
	if(root==NULL){
		return true;
	}

	if(root->data>=min&&root->data<=max &&isbstornot(root->left,min,root->data)&&isbstornot(root->right,root->data+1,max)){
		return true;
	}
	return false;


}




int main(){
	// node*root=createbst();
	// printlevelwise(root);
	// linkedlist l=convertbsttosortedll(root);
	// printll(l.head);
	int n=sizeof(arr)/sizeof(int);
	node*root=createbstusingsortedarray(0,n-1);
	printlevelwise(root);
	// deleteinbst(root,5);
	// cout<<endl;
	// printlevelwise(root);
	int x=0;
	// rightview(root,1,x);
	// leftview(root,1,x);
	cout<<endl<<endl;
	if(isbstornot(root)){
		cout<<"bst"<<endl;
	}
	else{
		cout<<"Not bst"<<endl;

	}





	return 0;
}
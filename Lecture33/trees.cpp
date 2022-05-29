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

node* createtreelevelwise(){
	node*root=NULL;
	int data;

	cout<<"enter the data of root"<<endl;
	cin>>data;//8
	root=new node(data);
	queue<node*>q;
	q.push(root);


// loop
	while(!q.empty()){
		node*x=q.front();//800
	q.pop();

	cout<<"enter the left and right child of "<<x->data<<endl;
	int leftchild,rightchild;
	cin>>leftchild>>rightchild;//-1 14
	if(leftchild!=-1){
		
		x->left=new node(leftchild);
		q.push(x->left);
	}
	if(rightchild!=-1){
		
		x->right=new node(rightchild);
		q.push(x->right);
	}

	}

	return root;
	








}

node* createbinarytree(){

	int data;
	cin>>data;//8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
	if(data==-1){
		return NULL;
	}
	else{
		node*root=new node(data);
	root->left=createbinarytree();
	root->right=createbinarytree();

	return root;

	}
	



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



// lst rst root

int preor[]={8,3,1,6,4,7,10,14,13};//root  lst rst
int inor[]={1,3,4,6,7,8,10,13,14};//lst root rst
int i=0;
node* createtreeinorderpreorder(int s,int e){
	if(e<s){
		return NULL;
	}
	int d=preor[i];//3
	i++;//2
	node*root=new node(d);
	int k=-1;
	for(k=s;k<=e;k++){
		if(inor[k]==d){
			break;
		}

	}
	// k-->5
	root->left=createtreeinorderpreorder(s,k-1);
	root->right=createtreeinorderpreorder(k+1,e);

	return root;
}




int main(){
	int n=sizeof(inor)/sizeof(int);
	node*root=createtreeinorderpreorder(0,n-1);



	printlevelwise(root);

	return 0;
}
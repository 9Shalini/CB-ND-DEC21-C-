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




int main(){
	node*root=createbst();
	printlevelwise(root);


	return 0;
}
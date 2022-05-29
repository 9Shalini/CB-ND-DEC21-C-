#include<iostream>
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
void preorder(node*root){
	// root lst rst
	// base case
	if(root==NULL){
		return;
	}

	// /recursive case
	cout<<root->data<<" ";//root
	preorder(root->left);//lst
	preorder(root->right);//rst
}

void inorder(node*root){
	// lst root rst
	// base case
	if(root==NULL){
		return;
	}

	// /recursive case
	inorder(root->left);
	cout<<root->data<<" ";
	
	inorder(root->right);
}


void postorder(node*root){
	// lst rst root
	if(root==NULL){
		return;
	}
	// /recursive case
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";

}

int countnoofnodes(node*root){//8

	// base case
	if(root==NULL){
		return 0;
	}

	// int ltn=countnoofnodes(root->left);
	// int rtn=countnoofnodes(root->right);

	// return ltn+rtn+1;

	return countnoofnodes(root->left)+countnoofnodes(root->right)+1;
}


int sumofnodes(node*root){
	// base case
	if(root==NULL){
		return 0;
	}

	// recursive case
	return sumofnodes(root->left)+sumofnodes(root->right)+root->data;



}

int height(node*root){
	// base case
	if(root==NULL){
		return 0;
	}
	// recursive case

	return max(height(root->left),height(root->right))+1;

}

int main(){
	node*root=createbinarytree();
	// preorder(root);
	// cout<<endl;
	// inorder(root);//lst root rst
	// cout<<endl;
	// postorder(root);
	// cout<<endl;


	cout<<"countnoofnodes "<<countnoofnodes(root)<<endl;
	cout<<"height is "<<height(root)<<endl;
		cout<<"sum of nodes is "<<sumofnodes(root)<<endl;

	return 0;
}
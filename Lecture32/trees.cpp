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


int diameter(node*root){
	if(root==NULL){
		return 0;
	}
	// if dia is passing throught left subtree

	int op1=diameter(root->left);

	// if dia is passing throught right subtree

	int op2=diameter(root->right);

	// if dia is passing throught root node 

	int op3=height(root->left)+height(root->right);

	return max(op1,max(op2,op3));


}


bool findnodeinatree(node*root,int key){
	// base case
	if(root==NULL){
		return false;
	}


	// recursive case
	if(root->data==key){
		return true;
	}
	return(findnodeinatree(root->left,key)||findnodeinatree(root->right,key)) ;


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


// mirror of a tree

void mirrorofatree(node*root){
	// base case
	if(root==NULL){
		return;
	}


	// recursive case
	swap(root->left,root->right);
	mirrorofatree(root->left);
	mirrorofatree(root->right);

}



int main(){
	node*root=createbinarytree();
	preorder(root);
	cout<<endl;
	// inorder(root);//lst root rst
	// cout<<endl;
	// postorder(root);
	// cout<<endl;


	// cout<<"countnoofnodes "<<countnoofnodes(root)<<endl;
	// cout<<"height is "<<height(root)<<endl;
	// 	cout<<"sum of nodes is "<<sumofnodes(root)<<endl;

	// 
	// mirrorofatree(root);


	// preorder(root);
	// cout<<endl;

	printlevelwise(root);

	// int key;
	// cin>>key;
	// if(findnodeinatree(root,key)){
	// 	cout<<"yes"<<endl;
	// }
	// else{
	// 	cout<<"No"<<endl;
	// }
	return 0;
}
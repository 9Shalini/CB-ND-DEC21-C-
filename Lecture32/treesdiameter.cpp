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


// // o(n2)-->time complexity because of height
// int diameter(node*root){
// 	if(root==NULL){
// 		return 0;
// 	}
// 	// if dia is passing throught left subtree

// 	int op1=diameter(root->left);

// 	// if dia is passing throught right subtree

// 	int op2=diameter(root->right);

// 	// if dia is passing throught root node 

// 	int op3=height(root->left)+height(root->right);

// 	return max(op1,max(op2,op3));


// }


class Pair{
public:
	int hei;
	int dia;
};
// pair<int,int> p;

Pair diameterinon(node*root){
	// base case
	Pair p;
	if(root==NULL){
		p.hei=0;
		p.dia=0;
		return p;
	}
	// recursive case
	Pair leftpair=diameterinon(root->left);
	Pair rightpair=diameterinon(root->right);
	p.hei=max(leftpair.hei,rightpair.hei)+1;
	int op1=leftpair.dia;
	int op2=rightpair.dia;
	int op3=leftpair.hei+rightpair.hei;
	p.dia=max(op1,max(op2,op3));
	return p;
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



int main(){
	node*root=createbinarytree();

	Pair x=diameterinon(root);

	cout<<"height is "<<x.hei<<endl;
	cout<<"diameter is "<<x.dia<<endl;



	printlevelwise(root);

	return 0;
}
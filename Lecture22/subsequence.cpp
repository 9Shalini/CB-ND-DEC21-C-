#include<iostream>
using namespace std;
// int c=0;
void subsequnce(char inp[100],int i,char out[],int j){
// base case
	if(inp[i]=='\0'){
		out[j]='\0';
		// if(ispalindrome(out)){
		// 	c++;
		// }
		cout<<out<<endl;
		return;
	}


	// recursive case
	// without a 
	subsequnce(inp,i+1,out,j);//"bc"
	// with a
	out[j]=inp[i];
	subsequnce(inp,i+1,out,j+1);



}
int main(){
	char inp[100];
	cin>>inp;//"abc"
	char out[100];
	subsequnce(inp,0,out,0);



	return 0;
}
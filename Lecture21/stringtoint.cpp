#include<iostream>
using namespace std;
int stringtoint(string s,int l){
	// base case
	if(l==0){
		return 0;
	}


	// recursive case
	int digit=s[l-1]-'0';//9
	return stringtoint(s,l-1)*10+digit;
}
int main(){
	string s;
	// cout<<s+100<<endl; //439100

	cin>>s;//"439"
	int l=s.length();
	cout<<stringtoint(s,l)+100<<endl;



	return 0;
}
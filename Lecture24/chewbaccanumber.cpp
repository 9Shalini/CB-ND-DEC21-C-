#include<iostream>
using namespace std;


int main(){
	string s;
	cin>>s;//"9989"
	int i=0;
	if(s[i]=='9'){
		i++;

	}

	while(s[i]!='\0'){
		int x=s[i]-'0';//'9'-'0'-->9
	if(9-x<=4){
		s[i]=9-x+'0';
	}
	i++;

	}


	cout<<s<<endl;
	



	return 0;
}
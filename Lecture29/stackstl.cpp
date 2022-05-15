#include<iostream>
#include<stack>
using namespace std;

int main(){
	stack<int>s;
	s.push(5);
	s.push(3);
	s.push(7);
	s.push(45);

	while(!s.empty()){
		cout<<s.top()<<endl;//45 7 3 5
	s.pop();

	}

	
	

	return 0;
}
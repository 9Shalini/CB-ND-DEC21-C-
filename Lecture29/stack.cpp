#include<iostream>
#include<vector>
using namespace std;
class stack{
	vector<int>v;
public:
	

	// push
	void push(int d){
		v.push_back(d);
	}

	// pop
	void pop(){
		v.pop_back();
	}


	// top
	int top(){
		return v[v.size()-1];
	}


	// size
	int size(){
		return v.size();
	}


	// empty
	bool empty(){
		if(v.size()==0){
			return true;
		}
		else{
			return false;
		}
		// return v.size()==0;
	}

};
int main(){
	stack s;
	s.push(5);
	s.push(3);
	s.push(7);
	s.push(45);


	// cout<<s.v[1]<<endl;
// loop
	while(!s.empty()){
		cout<<s.top()<<endl;//45 7 3 5
	s.pop();

	}
	




	

	return 0;
}
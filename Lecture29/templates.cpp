#include<iostream>
#include<vector>
using namespace std;

template<typename U>

class stack{
	vector<U>v;
public:
	

	// push
	void push(U d){
		v.push_back(d);
	}

	// pop
	void pop(){
		v.pop_back();
	}


	// top
	U top(){
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
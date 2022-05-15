#include<iostream>
#include<vector>
using namespace std;
template<typename U>
class stack{
	vector<U>v;
public:
	// push
	void pushh(U d){
		v.push_back(d);
	}

	// pop
	void popp(){
		v.pop_back();
	}


	// top
	U topp(){
		return v[v.size()-1];
	}


	// size
	int sizee(){
		return v.size();
	}


	// empty
	bool emptyy(){
		if(v.size()==0){
			return true;
		}
		else{
			return false;
		}
		// return v.size()==0;
	}

};

#include<iostream>
#include<vector>
using namespace std;

int main(){
	// // syntax
	// // vector<datatype> vectorname;
	vector<int>v;
	if(v.empty()==true){
		cout<<"vector is empty"<<endl;

	}
	else{
		cout<<"vector is not empty"<<endl;

	}
	// cout<<v.size()<<endl;

	// cout<<v.capacity()<<endl;

	// arr[0]=50;
	// push_back
	v.push_back(50);
	// cout<<v.size()<<endl;

	// cout<<v.capacity()<<endl;


	v.push_back(30);

	// cout<<v.size()<<endl;

	// cout<<v.capacity()<<endl;


	v.push_back(20);
	// cout<<v.size()<<endl;

	// cout<<v.capacity()<<endl;


	v.push_back(60);
	// cout<<v.size()<<endl;

	// cout<<v.capacity()<<endl;


	v.push_back(15);

	// v.begin() -->address 
	v.insert(v.begin()+1,87);

	v.insert(v.end()-1,57);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;


	sort(v.begin(), v.end());
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;

	// if(v.empty()==true){
	// 	cout<<"vector is empty"<<endl;

	// }
	// else{
	// 	cout<<"vector is not empty"<<endl;

	// }


	// // vector size
	// // cout<<v.size()<<endl;

	// // cout<<v.capacity()<<endl;
	// // print
	// for(int i=0;i<v.size();i++){
	// 	cout<<v[i]<<" ";
	// }
	// cout<<endl;

	// cout<<v.front()<<endl;

	// cout<<v.back()<<endl;


	// vector<int>v(10);

	// v.push_back(90);
	// cout<<v.size()<<endl;

	// cout<<v.capacity()<<endl;


	// for(int i=0;i<v.size();i++){
	// 	cout<<v[i]<<" ";

	// }
	// cout<<endl;

	// v[3]=9;
	// for(int i=0;i<v.size();i++){
	// 	cout<<v[i]<<" ";

	// }
	// cout<<endl;



	


	return 0;
}
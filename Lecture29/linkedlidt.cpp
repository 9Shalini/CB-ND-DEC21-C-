#include<iostream>

// stl-->standard template libraray
#include<list>

using namespace std;
int main(){

	list<int> l;
	l.push_back(60);
	l.push_back(30);
	l.push_back(20);

	l.push_front(15);

	l.pop_front();
	// print
	 list<int>::iterator it;

	 for(it=l.begin();it!=l.end();it++){
	 	cout<<*it<<" ";

	 }
	cout<<endl;

	l.reverse();

	for(it=l.begin();it!=l.end();it++){
	 	cout<<*it<<" ";

	 }
	cout<<endl;






	return 0;
}
#include<iostream>
using namespace std;
int main(){
	int count=0;
	char ch;
	// cin>>ch;//T
	ch=cin.get();//property wo hamari whitespaces ' ','\t','\n'

// loop
	while(ch!='$'){
		count++;//5
		// cin>>ch;//pehla value tha T usko override karega

		ch=cin.get();


	}

	cout<<"count of characters before $ is : "<<count<<endl;
	



	return 0;
}
#include<iostream>
using namespace std;
int countofchar=0;
int length(char *arr){
	int i=0;
// loop
	while(arr[i]!='\0'){
		countofchar++;
	i++;

	}
	return countofchar;
	
}
int main(){
	
	char arr6[100];
	cin.getline(arr6,100);
	
	cout<<"length of arr6 is "<<length(arr6)<<endl;
	

	return 0;
}
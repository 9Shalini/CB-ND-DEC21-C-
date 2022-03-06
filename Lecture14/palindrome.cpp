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
bool ispalindrome(char*arr){
	int i=0;
	int j=length(arr)-1;
// loop
	while(i<j){
		if(arr[i]==arr[j]){
		j--;
		i++;
	}
	else{
		return false;
	}

	}
	return true;	
}
int main(){
	
	char arr6[100];
	cin.getline(arr6,100);//namman

	if(ispalindrome(arr6)==true){
		cout<<"yes palindrome"<<endl;
	}
	else{
		cout<<"not palindrome"<<endl;
	}
	
	
	

	return 0;
}
#include<iostream>
using namespace std;

int length(char *arr){
	int countofchar=0;

	int i=0;
// loop
	while(arr[i]!='\0'){
		countofchar++;
	i++;

	}
	return countofchar;
	
}
void append(char arr1[],char arr2[]){
	int i=length(arr1);
	int j=0;

// loop
	while(j<=length(arr2)){
		arr1[i]=arr2[j];
	i++;
	j++;


	}

	cout<<arr1<<endl;
	cout<<arr2<<endl;

}

int main(){
	
	char arr1[100];
	char arr2[100];

	cin.getline(arr1,100);//cat
	cin.getline(arr2,100);//tiger

	append(arr1,arr2);
	

	
	
	
	
	

	return 0;
}
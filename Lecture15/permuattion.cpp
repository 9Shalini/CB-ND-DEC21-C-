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
int main(){

	// permuation
	// aabcsx;
	// csaba;

	char arr1[100];
	cin.getline(arr1,100);//aabcs
	char arr2[100];
	cin.getline(arr2,100);//csaba;

	int l1=length(arr1);
	int l2=length(arr2);
	if(l1!=l2){
		cout<<"not permuation"<<endl;

	}

	else{
		int freq[26]={0};

	for(int i=0;i<length(arr1);i++){
		// arr1[i];//a

	int indx=arr1[i]-'a';//'b'-'a'-->0
	freq[indx]++;

	}
	for(int j=0;j<length(arr2);j++){

		int indx=arr2[j]-'a';//'c'-'a'//99-97-->2
		freq[indx]--;
	}
	int i;
	for(i=0;i<26;i++){
		if(freq[i]!=0){
			cout<<"not permuation"<<endl;
			break;
		}
	}

	if(i==26){
		cout<<"permuation"<<endl;

	}



	}

	
	



	
	

	return 0;
}
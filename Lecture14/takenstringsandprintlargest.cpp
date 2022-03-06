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

void copy(char finalarr[],char arr[]){
	int i=0;
	int j=0;

// loop
	while(i<=length(arr)){
		finalarr[j++]=arr[i++];

	}
	
	// i++;
	// j++;
}

int main(){
	
	int n;
	cin>>n;//3
	char arr[1000];
	int maxlen=0;
	char finalarr[1000];
	cin.ignore();
	// char *ptr=arr;

	for(int c=1;c<=n;c++){//pehli string le rahi hun
	cin.getline(arr,1000);//bat
	int len=length(arr);//3
	if(len>maxlen){
		maxlen=len;//8
		// char *ptr=arr;
		copy(finalarr,arr);

	}


}


cout<<finalarr<<endl;

cout<<maxlen<<endl;








	
	
	
	
	

	return 0;
}
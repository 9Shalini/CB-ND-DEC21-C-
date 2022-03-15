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
	char arr[1000];
	int k;
	cin>>k;//3
	cin.ignore();
	// k=k%length(arr);
	
	cin.getline(arr,1000);//coding

	int i=length(arr)-1;//5

	int l=length(arr);//6
	k=k%l;



	while(i>=0){
		arr[i+k]=arr[i];
		i--;


	}


	int j=l;//6
	int s=0;

for(int count=1;count<=k;count++){
		arr[s]=arr[j];
	j++;
	s++;



}

//
arr[l]='\0';

cout<<arr<<endl;




	





	return 0;
}
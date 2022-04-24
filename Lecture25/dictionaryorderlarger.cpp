#include<iostream>

#include<vector>
using namespace std;
vector<string>v;
void permuation(char in[],int i){
	// base case
	if(in[i]=='\0'){
		// cout<<in<<endl;
		v.push_back(in);

		return;
	}


	// recursive case
	for(int j=i;in[j]!='\0';j++){
		swap(in[i],in[j]);
		permuation(in,i+1);
		swap(in[i],in[j]); //backtracking

	}

	// swap(in[i],in[j]);
	

}
int main(){
	char in[100];//"bac"
	cin>>in;
	permuation(in,0);
	sort(v.begin(), v.end());

	for(int i=0;i<v.size();i++){
		if(v[i]>in){
			cout<<v[i]<<endl;
		}
	}



	return 0;
}
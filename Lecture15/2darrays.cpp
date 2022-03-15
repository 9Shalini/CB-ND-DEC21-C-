#include<iostream>
using namespace std;
int main(){


	// 2d arrays
	// integer 2d array

	// datatype nameofarr[rows][cols];
	// int arr[4][3]={
	// 	{3,4,5},
	// 	{6,7,8},
	// 	{1,2,4},
	// 	{0,10,11}
	// };


	// 2nd way ignore no of rows
	// int arr[][3]={
	// 	{3,4,5},
	// 	{6,7,8},
	// 	{1,2,4},
	// 	{0,10,11}
	// };

	// access 
	// arr[row][col];
	// cout<<arr[2][1]<<" ";

	// 1st row
	// cout<<arr[0][0]<<" ";
	// cout<<arr[0][1]<<" ";
	// cout<<arr[0][2]<<" ";

	// for(int i=0;i<=2;i++){
	// 	cout<<arr[0][i]<<" ";


	// }
	
	// cout<<endl;

	// 2nd row
	// cout<<arr[1][0]<<" ";
	// cout<<arr[1][1]<<" ";
	// cout<<arr[1][2]<<" ";

	// for(int i=0;i<=2;i++){
	// 	cout<<arr[1][i]<<" ";


	// }
	
	// cout<<endl;


	//3rd row
	// cout<<arr[2][0]<<" ";
	// cout<<arr[2][1]<<" ";
	// cout<<arr[2][2]<<" ";
	// for(int i=0;i<=2;i++){
	// 	cout<<arr[2][i]<<" ";


	// }
	
	// cout<<endl;


	//3rd row
	// cout<<arr[3][0]<<" ";
	// cout<<arr[3][1]<<" ";
	// cout<<arr[3][2]<<" ";
	// for(int i=0;i<=2;i++){
	// 	cout<<arr[3][i]<<" ";


	// }
	
	// cout<<endl;


// print 
// 	for(int k=0;k<=3;k++){
// //inner loop ek row ka kaam 
// 		for(int i=0;i<=2;i++){
// 		cout<<arr[k][i]<<" ";


// 	}
	
// 	cout<<endl;


// 	}
	



	// int arr[10]={1,2,34,4,5,66,6,,67,7};
	// int arr[]={1,2,34,4,5,66,6,,67,7};

	// 3 4 5
	// 6 7 8
	// 1 2 4
	// 0 10 11

	// int arr2[100][100];
	// int rows;
	// int cols;
	// cin>>rows>>cols;//3 4

	// ist row input lena hai
	// for(int i=0;i<=3;i++){
	// 	cin>>arr2[0][i];
	// }

	// // 2nd row input lena hai
	// for(int i=0;i<=3;i++){
	// 	cin>>arr2[1][i];
	// }

	// // 3rd row 
	// for(int i=0;i<=3;i++){
	// 	cin>>arr2[2][i];
	// }

//user input
// 	for(int k=0;k<=rows-1;k++){

// 		for(int i=0;i<=cols-1;i++){
// 		cin>>arr2[k][i];

// 	}


// 	}

// //print
// 	for(int k=0;k<=rows-1;k++){

// 		for(int i=0;i<=cols-1;i++){
// 		cout<<arr2[k][i]<<" ";


// 	}
	
// 	cout<<endl;


// 	}

	// int arr2[3][4]={
	// 	{1,2,3,4},
	// 	{5,6,7,8},
	// 	{9,10,11,12}
		
	// };


	// cout<<arr2[0]<<" "<<&arr2[0][0]<<endl;
	// cout<<arr2[1]<<" "<<&arr2[1][0]<<endl;
	// cout<<arr2[2]<<" "<<&arr2[2][0]<<endl;


	// char arr4[3][4]={
	// 	{'A','B','C','\0'},//ABC   ABCDEFGHI
	// 	{'D','E','F','\0'},//DEF  DEFGHI
	// 	{'G','H','I','\0'},//GHI  GHI

	// };

	// cout<<arr4[0]<<endl;
	// cout<<arr4[1]<<endl;
	// cout<<arr4[2]<<endl;
	


	char arr5[4][7]={
		"coding",
		"block",
		"car",
		"duster"
	};
	

	cout<<arr5[0]<<endl;
	cout<<arr5[1]<<endl;
	cout<<arr5[2]<<endl;
	cout<<arr5[3]<<endl;
	


	
	

	return 0;
}
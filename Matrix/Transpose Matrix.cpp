/*
Program to print transpose of Matrix : 
ex : 
     1 2 3
     4 5 6
     7 8 9
o/p :
     1 4 7
     2 5 8 
     3 6 9
 */
#include<iostream>
using namespace std;
void transposeMatrix(int arr[][100], int r, int c)
{
	cout<<"Transpose Martrix :"<<endl;
	for(int j=0; j<c; j++)
	{
		for(int i=0; i<r; i++)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}
}
int main()
{
	int arr[100][100];
	int r,c;
	cin>>r>>c;
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
			cin>>arr[i][j];
	}
	cout<<"Matrix are : "<<endl;
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}
	transposeMatrix(arr,r,c);
	return 0;
}
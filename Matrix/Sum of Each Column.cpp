/*
Program to print the sum of each column 
ex :
      1 2 3
      4 5 6
      7 8 9
o/p : 
      sum of 1th column : 12
      sum of 2th column : 15
      sum of 3ht column : 18
 */
#include<iostream>
using namespace std;
void sumofColumn(int arr[][100], int r, int c)
{
	int i;
	for(int j=0; j<c; j++)
	{
		int sum=0;
		for(i=0; i<r; i++)
			sum=sum+arr[i][j];
		cout<<"Sum of "<<j+1<<"th "<<"column : "<<sum<<endl;
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
	sumofColumn(arr,r,c);
	return 0;
}
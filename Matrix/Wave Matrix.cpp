/*
Program to print wave matrix :
Wave matrix means print 0th column from top to bottom, 1th column from bottom to top, 2th column from top to bottom and so on
ex : 
     1 2 3
     4 5 6 
     7 8 9
o/p : 1 4 7 8 5 2 3 6 9 
 */
#include<iostream>
using namespace std;
void wavePrint(int arr[][100], int r, int c)
{
	cout<<"\nWave print of Matrix are : ";
	for(int j=0; j<c; j++)
	{
		if(j%2==0)
		{
			for(int i=0; i<r; i++)
				{
					cout<<arr[i][j]<<" ";
				}
		}
		else
		{
			for(int i=r-1; i>=0; i--)
			{
				cout<<arr[i][j]<<" ";
			}
		}
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
	cout<<"\nMatrix is : "<<endl;
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}
	wavePrint(arr,r,c);
	return 0;
}
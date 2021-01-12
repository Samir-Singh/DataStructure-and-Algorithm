/*
Program to print Leader in an Array : Leader means the right side of the leader is less then the leader
ex1 : Input : arr[]={16,17,4,3,5,2}
      O/P   : 17,5,2
Time Complexity : O(n^2)
 */
#include<stdio.h>
void leader(int arr[], int n)
{
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[i]<arr[j])
				break;
		}
		if(j==n)
			printf("%d ",arr[i]);
	}
}
int main()
{
	int arr[]={16,17,4,3,5,2};
	int n=sizeof(arr)/sizeof(int);
	leader(arr,n);
	return 0;
}
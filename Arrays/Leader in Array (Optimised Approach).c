/*
Program to print Leader in an Array : Leader means the right side of the leader is less then the leader
ex1 : Input : arr[]={16,17,4,3,5,2}
      O/P   : 17,5,2
Time Complexity : O(n)
 */
#include<stdio.h>
void leader(int arr[], int n)
{
	int i,max=0;
	for(i=n-1; i>=0; i--)
	{
		if(arr[i] > max)
			{
				max=arr[i];
				printf("%d ",max);
			}
	}
}
int main()
{
	int arr[]={16,17,4,3,5,2};
	int n=sizeof(arr)/sizeof(int);
	leader(arr,n);
	return 0;
}
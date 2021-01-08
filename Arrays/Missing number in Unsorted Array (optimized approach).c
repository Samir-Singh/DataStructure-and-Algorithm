/*
we have to find the missing number in sorted array 
ex: 1 3 4 5 6 7 8         missing number is 2
    1 2 3 5 6 7 8         missing number is 4
    Time Complexity : O(n)
    Space Complexity : O(1)
    This is the better approach for unsorted array because there is no overflow condition
 */
#include<stdio.h>
int getMissing(int arr[], int n)
{
	int x,y,i;
	x=y=0;
	for(i=0; i<n; i++)
	{
		x=x^arr[i];
	}
	for(i=1; i<=n+1; i++)
	{
		y=y^i;
	}
	return (x^y);
}
int main()
{
	int arr[]={2,3,4,1,6,7};
	int n=sizeof(arr)/sizeof(int);
	printf("Missing number : %d",getMissing(arr,n));
	return 0;
}
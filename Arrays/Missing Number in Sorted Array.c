/*
we have to find the missing number in sorted array 
ex: 1 3 4 5 6 7 8         missing number is 2
    1 2 3 5 6 7 8         missing number is 4
    Time Complexity : O(logn)
    Space Complexity : O(1)
 */
#include<stdio.h>
int missingNumber(int arr[], int n)
{
	int l,r,mid;
	l=0,r=n-1;
	while(l <= r)
	{
		mid=(l+r)/2;
		if(arr[mid]!=mid+1 && arr[mid-1]==mid)
			return mid+1;
		if(arr[mid]!=mid+1)
			r=mid-1;
		else
			l=mid+1;
	}
	return -1;
}
int main()
{
	int arr[]={1,3,4,5,6,7,8};
	int n=sizeof(arr)/sizeof(int);
	printf("Missing number is : %d",missingNumber(arr,n));
	return 0;
}
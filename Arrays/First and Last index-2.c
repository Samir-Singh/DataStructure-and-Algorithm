/*
Program to print first and last index of the number in a sorted array:
ex : Input : arr[] = {1,3,5,5,5,5,67,123,125}
             x=5
     Output : First Occurrence : 2
              Last Occurrence : 5
     Input : arr[] = {1,3,5,5,5,5,7,123,125}
             x=7;
     Output : First Occurrence : 6
              Last Occurrence : 6
Time Complexity : O(logn)
 */
#include<stdio.h>
int firstIndex(int arr[], int n, int x)
{
	int res,low,high,mid;
	res=-1,low=0,high=n-1;
	while(low <= high)
	{
		mid=low+((high-low)/2);
		if(arr[mid]==x)
		{
			res=mid;
			high=mid-1;
		}
		else if(x<arr[mid])
			high=mid-1;
		else
			low=mid+1;
	}
	return res;
}
int lastIndex(int arr[], int n, int x)
{
	int res,mid,low,high;
	res=-1,low=0,high=n-1;
	while(low <= high)
	{
		mid=low+((high-low)/2);
		if(arr[mid]==x)
		{
			res=mid;
			low=mid+1;
		}
		else if(x<arr[mid])
			high=mid-1;
		else
			low=mid+1;
	}
	return res;
}
int main()
{
	int arr[]={1,3,5,5,5,5,7,123,125};
	int n=sizeof(arr)/sizeof(int);
	int x=5;
	printf("First Occurrence : %d",firstIndex(arr,n,x));
	printf("\nLast Occurence : %d",lastIndex(arr,n,x));
	return 0;
}
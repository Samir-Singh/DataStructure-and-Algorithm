/*
Program to count total number of 1's in a sorted array
ex: input : 1,1,1,1,0,0,0,0 
    ouptput : total no. of 1's = 4;
Time Complexty : O(log(n))
 */
#include<stdio.h>
int countOnes(int arr[], int n)
{
	int mid;
	int low=0;
	int high=n-1;
	while(low <= high)
	{
		mid=(low+high)/2;
		if((mid==high) || (arr[mid]==1 && arr[mid+1]==0) )
             return mid+1;
        if(arr[mid]==0)
        	high=mid-1;
        else
        	low=mid+1;
	}
	return 0;
}
int main()
{
	int arr[]={0,0,0,0,0,0};
	int n=sizeof(arr)/sizeof(int);
	printf("Total 1's = %d",countOnes(arr,n));
	return 0;
}
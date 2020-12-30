#include<stdio.h>
int binarySearch(int arr[], int lb, int ub, int data)
{
	while(lb <= ub)
	{
		int mid=(lb+ub)/2;

		if(arr[mid]==data) return mid;

		if(data < arr[mid]) ub=mid-1;
		
		else lb=mid+1;
	}
	return -1;
}
int main()
{
	int arr[]={3, 12, 13, 23, 44, 45, 53, 54, 56, 67, 78};
	int n=sizeof(arr)/sizeof(int);
	int data=23;
	printf("Element found at index %d",binarySearch(arr,0,n-1,data));
	return 0;
}
#include<stdio.h>
int linearSearch(int arr[], int n, int data)
{
	int i;
	for(i=0; i<n; i++)
		if(arr[i]==data)
			return i;
	return -1;
}
int main()
{
	int arr[]={12,45,13,56,3,56,45,67,23,53,78};
	int n=sizeof(arr)/sizeof(int);
	int data=3;
	printf("Element is found at index %d",linearSearch(arr,n,data));
	return 0;
}
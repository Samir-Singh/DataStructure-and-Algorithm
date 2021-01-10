/*
Remove Duplicates From Sorted Array
ex1:  Input : arr[] = {2,2,2,2,2}
      Output : {2}
      new size : 1
ex2:  Input : arr[] = {1,2,2,3,4,4,4,5,5}
      Output : {1,2,3,4,5}
      new Size : 5
Time Complexity : O(n)
Space Complexity : O(1)
 */
#include<stdio.h>
void removeDuplicates(int arr[], int n)
{
	int i,j;
	j=0;
	for(i=0; i<n-1; i++)
	{
		if(arr[i]!=arr[i+1])
		{
			arr[j]=arr[i];
			j++;
		}
	}
	arr[j]=arr[n-1];
	for(i=0; i<=j; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nNew Size : %d",j+1);
}
int main()
{
	int arr[]={1,2,2,3,4,4,4,5,5};
	int n=sizeof(arr)/sizeof(int);
	removeDuplicates(arr,n);
	return 0;
}

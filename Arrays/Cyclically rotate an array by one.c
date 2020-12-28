#include<stdio.h>
void rotate(int arr[], int n)
{
	int temp,i;
	temp=arr[0];
	for(i=0; i<n; i++)
	{
		arr[i]=arr[i+1];
	}
	arr[n-1]=temp;
}
void printArray(int arr[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n\n");
}
int main()
{
	int arr[]={8,12,32,43,11};
	int n=sizeof(arr)/sizeof(int);
	printf("Before rotation : ");
	printArray(arr,n);
	rotate(arr,n);
	printf("After rotation : ");
	printArray(arr,n);
	return 0;
}
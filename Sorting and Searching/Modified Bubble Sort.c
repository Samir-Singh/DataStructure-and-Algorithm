#include<stdio.h>
void bubbleSort(int arr[], int n)
{
	int temp,i,j,isSorted;
	for(i=1; i<n; i++)
	{
		printf("\n\nNumber of Passes : %d",i);
		isSorted=1;
		for(j=0; j<=n-1-i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				isSorted=0;
			}
		}
		if(isSorted) return;
	}
}
void display(int arr[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	int arr[]={12,45,13,57,3,56,46,67,23,53,78};
	int n=sizeof(arr)/sizeof(int);
	printf("Before Sorting : ");
	display(arr,n);
	bubbleSort(arr,n);
	printf("\n\nAfter Sorting : ");
	display(arr,n);
	return 0;
}
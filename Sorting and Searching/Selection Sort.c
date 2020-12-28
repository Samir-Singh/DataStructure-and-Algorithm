#include<stdio.h>
void insertionSort(int arr[], int n)
{
	int i,j,temp,min;
	for(i=0; i<n-1; i++)
	{
		min=i;
		for(j=i+1; j<=n-1; j++)
		{
			if(arr[j]<arr[min])
				min=j;
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
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
	int arr[]={12,45,13,56,3,56,45,67,23,53,78};
	int n=sizeof(arr)/sizeof(int);
	printf("Before Sorting : ");
	display(arr,n);
	insertionSort(arr,n);
	printf("\n\nAfter Sorting : ");
	display(arr,n);
	return 0;
}
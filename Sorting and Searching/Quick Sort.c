#include<stdio.h>
void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int arr[], int lb, int ub)
{
	int i,j,pivot;
	i=lb;
	j=ub;
	pivot=arr[i];
	while(i < j)
	{
		while(arr[i]<=pivot)
			i++;
		while(arr[j]>pivot)
			j--;
		if(i < j)
			swap(&arr[i],&arr[j]);
	}
	swap(&arr[lb],&arr[j]);
	return j;
}
void display(int arr[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
}
void quickSort(int arr[], int lb, int ub)
{
	if(lb < ub)
	{
		int loc=partition(arr,lb,ub);
		quickSort(arr,lb,loc-1);
		quickSort(arr,loc+1,ub);
	}
}
int main()
{
	int arr[]={12,45,13,57,3,56,46,67,23,53,78};
	int n=sizeof(arr)/sizeof(int);
	printf("Before Sorting : ");
	display(arr,n);
	quickSort(arr,0,n-1);
	printf("\nAfter Sorting : ");
	display(arr,n);
	return 0;
}
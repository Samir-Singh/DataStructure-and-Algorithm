#include<stdio.h>
void merge(int arr[], int lb, int mid, int ub)
{
	int i,j,k,b[50];
	k=i=lb;
	j=mid+1;
	while(i<=mid && j<=ub)
	{
		if(arr[i] < arr[j])
		{
			b[k]=arr[i];
			i++;
		}
		else
		{
			b[k]=arr[j];
			j++;
		}
		k++;
	}
	if(i > mid)
	{
		while(j <= ub)
		{
			b[k]=arr[j];
			k++;
			j++;
		}
	}
	else if(j > ub)
	{
		while(i <= mid)
		{
			b[k]=arr[i];
			k++;
			i++;
		}
	}
	for(i=lb; i<=ub; i++)
	{
		arr[i]=b[i];
	}
}
void mergeSort(int arr[], int lb, int ub)
{
	if(lb < ub)
	{
		int mid=(lb+ub)/2;
		mergeSort(arr,lb,mid);
		mergeSort(arr,mid+1,ub);
		merge(arr,lb,mid,ub);
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
	mergeSort(arr,0,n-1);
	printf("\nAfter Sorting : ");
	display(arr,n);
	return 0;
}
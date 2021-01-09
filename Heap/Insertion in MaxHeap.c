#include<stdio.h>
void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void heapify(int arr[], int n, int i)
{
	int parent=(i-1)/2;
	if(parent >= 0)
	{
		if(arr[i] > arr[parent])
		{
			swap(&arr[i],&arr[parent]);
			heapify(arr,n,parent);
		}
	}
}
void insertHeap(int arr[], int &n, int i)
{
	n=n+1;
	arr[n-1]=i;
	heapify(arr, n, n-1);
}
void printHeap(int arr[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	int arr[]={10,5,3,2,4};
	int n=sizeof(arr)/sizeof(int);
	int key=15;
	insertHeap(arr, n, key);
	printHeap(arr,n);
	return 0;
}
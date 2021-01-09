#include<stdio.h>
void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void heapify(int arr[], int n, int i)
{
	int largest=i;
	int l=(2*i)+1;
	int r=(2*i)+2;
	if(l<n && arr[l]>arr[largest])
		largest=l;
	if(r<n && arr[r]>arr[largest])
		largest=r;
	if(largest!=l)
	{
		swap(&arr[i],&arr[largest]);
		heapify(arr,n,largest);
	}
}
void deleteHeap(int arr[], int &n)
{
	arr[0]=arr[n-1];
	n=n-1;
	heapify(arr,n,0);
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
	deleteHeap(arr,n);
	printHeap(arr,n);
	return 0;
}
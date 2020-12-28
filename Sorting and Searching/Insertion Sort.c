#include<stdio.h>
void insertionSort(int arr[], int n)
{
	int temp,i,j;
	for(i=1; i<n; i++)
	{
		temp=arr[i];
         for(j=i-1; j>=0; j--)
         {
         	if(arr[j]>temp)
         		arr[j+1]=arr[j];
         	else 
         		break;
         }
         arr[j+1]=temp;
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
	insertionSort(arr,n);
	display(arr,n);
	printf("\n\nAfter Sorting : ");
	display(arr,n);
	return 0;
}
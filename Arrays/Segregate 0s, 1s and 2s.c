/*
Program to sort 0s, 1s and 2s : This program is solved by Dutch national flag algorithm
ex: input: 0 1 2 0 2 1 1 0 2    ------>>  o/p : 0 0 0 1 1 1 2 2 2 
Time Complexity: O(n)
Space Complexity: O(1)
 */
#include<stdio.h>
void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void segregateArray(int arr[], int n)
{
	int low,mid,high;
	low=mid=0,high=n-1;
	while(mid <= high)
	{
		switch(arr[mid])
		{
			case 0:
			     swap(&arr[low++],&arr[mid++]);
			     break;
			case 1:
			     mid++;
			     break;
			case 2:
			     swap(&arr[mid],&arr[high--]);
			     break;
		}
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
	int arr[]={0,1,2,0,2,1,1,0,2};
	int n=sizeof(arr)/sizeof(int);
	segregateArray(arr,n);
	display(arr,n);
	return 0;
}
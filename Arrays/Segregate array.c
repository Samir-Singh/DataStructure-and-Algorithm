/*
We have to seperate the negative and positive number in an array : 
ex:     -5,7,5,-6,-4,-1,8,10,-12,45,-65
o/p :   -5,-6,-4,-1,-12,-65,7,5,8,10,45
 */
#include<stdio.h>
void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void segregateArray(int arr[], int n)
{
	int i=0,j=n-1;
	while(i < j)
	{
		while(arr[i] < 0)
			i++;
		while(arr[j] > 0)
			j--;
		if(i < j)
		{
			swap(&arr[i],&arr[j]);
			i++;
			j--;
		}
		else break;
	}
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	int arr[]={-5,7,5,-6,-4,-1,8,10,-12,45,-65};
	int n=sizeof(arr)/sizeof(int);
	segregateArray(arr,n);
	return 0;
}
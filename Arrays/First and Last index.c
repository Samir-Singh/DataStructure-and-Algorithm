/*
Program to print first and last index of the number in a sorted array:
ex : Input : arr[] = {1,3,5,5,5,5,67,123,125}
             x=5
     Output : First Occurrence : 2
              Last Occurrence : 5
     Input : arr[] = {1,3,5,5,5,5,7,123,125}
             x=7;
     Output : First Occurrence : 6
              Last Occurrence : 6
Time Complexity : O(n)
 */
#include<stdio.h>
void findFirstandLast(int arr[], int x, int n)
{
	int i,first,last;
	first=last=-1;
	for(i=0; i<n; i++)
	{
		if(arr[i]==x && first==-1)
		{
			first=i;
			last=i;
		}
		else if(arr[i]==x && first!=-1)
			last=i;
	}
	if(first!=-1)
	{
		printf("First Occurrence : %d\n",first);
		printf("Last Occurrence : %d",last);
	}
	else
		printf("Element not Present");
}
int main()
{
	int arr[]={1,3,5,5,5,5,7,123,125};
	int n=sizeof(arr)/sizeof(int);
	int x=5;
	findFirstandLast(arr,x,n);
	return 0;
}
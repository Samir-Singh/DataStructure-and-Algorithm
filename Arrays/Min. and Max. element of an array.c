#include<stdio.h>
int main()
{
	int arr[]={12,6,33,87,9,23,54,78,76,63};
	int n=sizeof(arr)/sizeof(int);
	int i,max,min;
	max=min=arr[0];
	for(i=0; i<n; i++)
	{
		if(max<arr[i])
			max=arr[i];
		if(min>arr[i])
			min=arr[i];
	}
	printf("Maximum element : %d",max);
	printf("\nMinium element : %d",min);
	return 0;
}
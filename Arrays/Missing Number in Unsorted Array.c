/*
we have to find the missing number in sorted array 
ex: 1 3 4 5 6 7 8         missing number is 2
    1 2 3 5 6 7 8         missing number is 4
    Time Complexity : O(n)
    Space Complexity : O(1)
    Limitation : This approach give the integer overflow if value of array is large
 */
#include<stdio.h>
int missingNumber(int arr[], int n)
{
	int sum,i,total;
	total=((n+1)*(n+2))/2;
	for(i=0; i<n; i++)
	{
		sum+=arr[i];
	}
	return (total-sum);
}
int main()
{
	int arr[]={1,3,4,5,6,7,8};
	int n=sizeof(arr)/sizeof(int);
	printf("Missing number is : %d",missingNumber(arr,n));
	return 0;
}

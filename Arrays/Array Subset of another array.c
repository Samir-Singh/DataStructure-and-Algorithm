#include<stdio.h>
int checkSubset(int arr1[], int arr2[], int n1, int n2)
{
	int i,j;
	for(i=0; i<n2; i++) /* this loop is for arrr2 */
	{
		for(j=0; j<n1; j++)  /* this loop is for arrr1 */
		{
			if(arr2[i]==arr1[j])
				break;
		}
		if(j==n1)
			return 0;
	}
	return 1;
}
int main()
{
	int arr1[]={3231, 53858, 19, 5, 59, 498, 520, 7, 9, 10, 11, 12};
	int arr2[]={520, 700, 498, 59, 10, 11, 12};
	int n1=sizeof(arr1)/sizeof(int);
	int n2=sizeof(arr2)/sizeof(int);
	if(checkSubset(arr1,arr2,n1,n2)) printf("YES");
	else printf("NO");
	return 0;
}
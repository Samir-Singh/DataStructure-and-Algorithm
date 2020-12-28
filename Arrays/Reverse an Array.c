#include<stdio.h>
int main()
{
	int n,i,a[20];
	printf("Enter size of an array : ");
	scanf("%d",&n);
	printf("Enter elements of an array : ");
	for(i=0; i<=n-1; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Reverse of an array : ");
	for(i=n-1; i>=0; i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
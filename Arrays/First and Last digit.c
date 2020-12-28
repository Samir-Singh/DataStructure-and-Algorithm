/* Write a program to print sum of first and last digit ex:-  1234 = 5 &&  32153 = 6 */
#include<stdio.h>
int main()
{
	int n,last,first;
	printf("Enter number : ");
	scanf("%d",&n);
	last=n%10;
	first=n;
	while(first>10)
	{
		first=first/10;
	}
	printf("Sum of first and last digit is : %d",first+last);
	return 0;
}
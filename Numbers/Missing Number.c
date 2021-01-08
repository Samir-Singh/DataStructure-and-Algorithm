/*
we have to find the missing number in a number 
ex: n=13456        missing number is 2
    n=123567       missing number is 4
 */
#include<stdio.h>
int main()
{
	int n=12356;
	int digit=0;
	int rem,x,y,n1,i;
	x=y=0;
	n1=n;
	while(n>0)
	{
		n=n/10;
		digit++;
	}
	while(n1>0)
	{
		rem=n1%10;
		x=x^rem;
		n1=n1/10;
	}
	for(i=1; i<=digit+1; i++)
	{
		y=y^i;
	}
	printf("Missing Number : %d",x^y);
	return 0;
}
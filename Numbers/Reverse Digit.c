/*
Program to print reverse a number 
ex : input : 12345 ---->  o/p : 54321
     input : 76543 ---->  o/p : 34567
 */
#include<stdio.h>
int main()
{
	int n=76543;
	int rev=0;
	while(n>0)
	{
		rev=(rev*10) + (n%10);
		n=n/10;
	}
	printf("Reverse = %d",rev);
	return 0;
}
/*
Program to count the total digits in a number : 
ex:  input: 123456  ---->    o/p:  digits=6
            3469240  --->    o/p:  digits=7
 */
#include<stdio.h>
int main()
{
	int n=1632784;
	int count=0;
	while(n>0)
	{
		n=n/10;
		count++;
	}
	printf("Digits=%d",count);
	return 0;
}
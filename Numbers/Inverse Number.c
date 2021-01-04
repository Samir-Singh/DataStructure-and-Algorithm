/*
Program to inverse the digits : means we have to convert the position of digits into number
ex :    input:  51432   ---->   o/p: 53214
                21453   ---->   o/p: 23154
Assumption:  1. there sholud not duplicate digits
             2. the digits lies between the total digits of a number
 */
#include<stdio.h>
#include<math.h>
int main()
{
	int digit,count=0,n=21453,inv=0;
	while(n>0)
	{
		digit=n%10;
		count++;
        inv = inv + count * pow(10,digit-1);
        n=n/10;
	}
	printf("Inverse = %d",inv);
	return 0;
}
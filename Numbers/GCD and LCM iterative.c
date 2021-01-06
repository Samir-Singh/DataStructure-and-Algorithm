#include<stdio.h>
int main()
{
	int x,y,n1,n2,gcd,lcm,rem;
	scanf("%d %d",&n1,&n2);
	x=n1;
	y=n2;
	while(n1%n2!=0)
	{
		rem=n1%n2;
		n1=n2;
		n2=rem;
	}
	gcd=n2;
	lcm=(x*y)/gcd;
	printf("\nGCD = %d\t\tLCM = %d\n",gcd,lcm);
	return 0;
}
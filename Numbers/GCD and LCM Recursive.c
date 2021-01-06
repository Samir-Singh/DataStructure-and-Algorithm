#include<stdio.h>
int GCD(int a, int b)
{
	if(b == 0)
		return a;
	else
		return GCD(b,a%b);
}
int main()
{
	int n1,n2,x,y,gcd,lcm;
	scanf("%d %d",&n1,&n2);
	x=n1;
	y=n2;
	gcd=GCD(n1,n2);
	lcm=(x*y)/gcd;
	printf("GCD = %d\t\tLCM = %d",gcd,lcm);
	return 0;
}
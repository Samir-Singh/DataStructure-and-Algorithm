/*
Program to rotate a number : 
ex : number: 1234   & k=3     ----->    o/p: 2341    if k<n;
     number: 1234   & k=8     ----->    o/p: 1234    if k>n;
     number: 1234   % k=-3    ----->    o/p: 4123    if k<0;
 */
#include<stdio.h>
#include<math.h>
int main()
{
	int n,count=0,temp,l,k,r,ans,divi,mult;
	scanf("%d %d",&n,&k);
	temp=n;
	while(temp!=0)
	{
		temp=temp/10;
		count++;
	}
	k=k%count;
	if(k < 0)
	{
		k=k+count;
	}
	divi=pow(10,k);
	mult=pow(10,count-k);
	l=n%divi*mult;	
	r=n/pow(10,k);
	ans=l+r;
	printf("Answer=%d",ans);
	return 0;
}
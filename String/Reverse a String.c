#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],temp;
	int l,i;
	printf("Enter a string : ");
	gets(str);
	l=strlen(str);
	for(i=0; i<=l/2; i++)
	{
		temp=str[i];
		str[i]=str[l-1-i];
		str[l-1-i]=temp;
	}
	printf("Reverse is : %s",str);
	return 0;
}
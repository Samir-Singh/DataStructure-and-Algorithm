#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i,l,flag=0;
	printf("Enter a String : ");
	gets(str);
	l=strlen(str);
	for(i=0; i<=l/2; i++)
	{
		if(str[i]!=str[l-i-1])
			flag=1;
	}
	if(flag==1) printf("Not Palindrome");
	else printf("Palindrome");
	return 0;
}
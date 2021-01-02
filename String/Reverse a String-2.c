/*
we have to reverse string but not the special character
ex : str = a,bc$d!     --->      o/p = d,cb$a!
     str = a!b*cdf$s   --->      o/p = s!f*dcb$a
 */
#include<stdio.h>
#include<string.h>
void swap(char *a, char *b)
{
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int isAlphabet(char str)
{
    if((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))
    	return 1;
    return 0;
}
void reverseString(char *str)
{
	int l,r;
	l=0,r=strlen(str);
	while(l < r)
	{
		if(!isAlphabet(str[l]))
			l++;
		if(!isAlphabet(str[r]))
			r--;
		else
		{
			swap(&str[l],&str[r]);
			l++;
			r--;
		}
	}
}
int main()
{
	char str[]="a!b*cdf$s";
	reverseString(str);
	printf("%s",str);
	return 0;
}

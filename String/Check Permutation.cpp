/*
Program to check two string are permutation of each other ot not.Permutation means weather the character present in the string1 is also in string2 and the length of both strings are same.
ex1 : str1 = abcd    str2 = cdab
o/p : true
ex2 : str1 = bab     str2 = aba
o/p : false
Time Complexity : O(nlogn)
 */
#include<bits/stdc++.h>
using namespace std;
bool checkPermutation(string str1, string str2)
{
	int n1=str1.length();
	int n2=str2.length();
	if(n1!=n2)
		return false;
	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());
	for(int i=0; i<n1; i++)
		if(str1[i]!=str2[i])
			return false;
	return true;
}
int main()
{
	string str1="aba";
	string str2="bab";
	if(checkPermutation(str1,str2))
		cout<<"True";
	else
		cout<<"False";
	return 0;
}
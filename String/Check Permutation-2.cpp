/*
Program to check two string are permutation of each other ot not.Permutation means weather the character present in the string1 is also in string2 and the length of both strings are same.
ex1 : str1 = abcd    str2 = cdab
o/p : true
ex2 : str1 = bab     str2 = aba
o/p : false
Time Complexity : O(n)
Space Complexity : O(1)
 */
#include<bits/stdc++.h>
using namespace std;
bool checkPermutation(string str1, string str2)
{
	int n1=str1.length();
	int n2=str2.length();
	if(n1!=n2)
		return false;
	int hash[26]={0};
	for(int i=0; str1[i]; i++)
		hash[str1[i]-'a']++;
	for(int i=0; str2[i]; i++)
		hash[str2[i]-'a']--;
	for(int i=0; i<26; i++)
		if(hash[i]!=0)
			return false;
	return true;
}
int main()
{
	string str1="abaab";
	string str2="bbaaa";
	if(checkPermutation(str1,str2))
		cout<<"True"<<endl;
	else
		cout<<"False"<<endl;
	return 0;
}
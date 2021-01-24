/*
Find Majority Element in an array. Majority element in an array arr[] of size n is if element appears 
more than n/2 times.
ex1 : Input : arr[]={3,3,4,2,4,4,2,4,4}
      O/P   : 4
      Explanation : frequency of 4 is 5 which is more than half of the size of the array
ex2 : Input : arr[]={3,3,4,2,4,4,2,4}
      O/P   : No Majority Element
      Explanation : there is no element whose frequeancy is more than n/2
Time Complexity : O(n)
Space Complexity : O(1)
Algorithm name : Moore's Voting Algorithm
 */
#include<iostream>
using namespace std;
void findMajority(int arr[], int n)
{
	int count,element,i;
	count=element=0;
	for(i=0; i<n; i++)
	{
		if(arr[i]==element)
			count++;
		else if(count==0)
			element=arr[i];
		else
			count--;
	}
	count=0;
	for(i=0; i<n; i++)
	{
		if(arr[i]==element)
			count++;
	}
	if(count>n/2)
		cout<<element;
	else 
		cout<<"No Majority Element";
}
int main()
{
	int arr[]={3,3,4,2,4,4,2,4,4};
    int n=sizeof(arr)/sizeof(int);
    findMajority(arr,n);
    return 0;
}
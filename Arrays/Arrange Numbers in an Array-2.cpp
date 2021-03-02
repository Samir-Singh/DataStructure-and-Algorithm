/* Program to arrange numbers in an array 
ex : n=2   arr = 1 2
     n=3   arr = 1 3 2
     n=4   arr = 1 3 4 2
     n=5   arr = 1 3 5 4 2
Time Complexity : O(n)
Space Complexity : O(1)
Approach : two pointer approach
*/
#include<iostream>
using namespace std;
void rearrangeArray(int arr[], int n)
{
	int s=0;
	int e=n-1;
	int val=1;
	while(s<=e)
	{
		arr[s]=val;
		val++;
		if(s!=e)
		{
			arr[e]=val;
			val++;
		}
		s++;
		e--;
	}
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[100];
	int n;
	cin>>n;
	rearrangeArray(arr,n);
	return 0;
}
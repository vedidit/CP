#include <iostream>
using namespace std;

int main() {

	int n;
	cin>>n;
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	int a[n];
	a[n-1]=arr[n-1];
	for(i=0;i<n-1;i++)
	{
		a[i]=arr[i]+arr[i+1];
	}
	for(i=0;i<=n-1;i++)
	{
		cout<<a[i]<<" ";
	}
	

	// your code goes here
	return 0;
}
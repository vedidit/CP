#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,c;
	cin>>n>>c;
	int arr[n];
	int temp=1;
int i;
	for(i=0;i<n;i++)
	{
			cin>>arr[i];
		
		
	}
	
	for(i=1;i<=n-1;i++)
	{
		if(arr[i]-arr[i-1]<=c)
		{
			temp++;
		}
		else{
			temp=1;
		}
	}
	cout<<temp;

	return 0;
}
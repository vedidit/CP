#include <iostream>
using namespace std;

int main() {
	int n,k,i=0,t=0;
	cin>>n>>k;
    int arr[n];
	
	for(i=0;i<n;i++)
    {cin>>arr[i];}
    for(i=0;i<n;i++)
    {
    if(((arr[i])%k)==0)
    {t=t+1;}
    }
    cout<<t;
		return 0;
}
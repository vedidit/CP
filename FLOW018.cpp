#include <iostream>
using namespace std;

unsigned long long int dp[1001];

int main() {
	// your code goes here
	int i,t,n;
	
	dp[0]=1;
	dp[1]=1;
	for(i=2;i<=1000;i++)
	{
		dp[i]=dp[i-1]*i;
	}
	
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		cout<<dp[n]<<endl;
		
		
	}
	return 0;
}
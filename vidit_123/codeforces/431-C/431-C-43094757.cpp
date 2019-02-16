#include <iostream>
#define int long long
using namespace std;
#define mod 1000000007
main() {
	int n,k,d;
	cin>>n>>k>>d;
	int dp[105][105];
	for(int i=0;i<105;i++){
		for(int j=0;j<105;j++){
			dp[i][j]=0;
		}
	}
	
	dp[0][0]=1;
	dp[0][1]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			if(i-j>=0){
				if(j<d){
					dp[i][0] = (dp[i][0]%mod + dp[i-j][0]%mod)%mod;
					dp[i][1] = (dp[i][1]%mod + dp[i-j][1]%mod)%mod;
				}else{
					dp[i][1] = (dp[i][1]%mod + dp[i-j][0]%mod)%mod;
					dp[i][1] = (dp[i][1]%mod + dp[i-j][1]%mod)%mod;
				}
				
			}
		}
	}
	cout<<dp[n][1]<<endl;
	
	
	// your code goes here
	return 0;
}
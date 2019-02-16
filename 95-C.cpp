/*
input

5 2 5

*/
#include <iostream>
using namespace std;
#define int long long 
int dp[61][61];

int f(int n,int r){
	if(dp[n][r]!=-1){
		return dp[n][r];
	}
	if(r==0){
		return 1;
	}
	if(n==r){
		return 1;
	}
	if(n<r){
		return 0;
	}
		dp[n][r]=f(n-1,r)+f(n-1,r-1);
		return dp[n][r]; 
	
}

main(){
	
	for(int i=0;i<61;i++){
		for(int j=0;j<61;j++){
			dp[i][j]=-1;
		}
	}
	for(int i=0;i<61;i++){
		for(int j=0;j<61;j++){
			dp[i][j]=f(i,j);
		}
	}
	int ans=0;
	int n,m,t;
	cin>>n>>m>>t;
	for(int i=4;i<=n;i++){
		if(t-i>=1){
			ans = ans + dp[n][i]*dp[m][t-i];
		}
	}
	cout<<ans<<endl;
}
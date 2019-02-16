#include <bits/stdc++.h>
using namespace std;
#define N 1000001
long long int dp[11][N+1];
int main() {
	for(int i=0;i<N;i++){
		dp[0][i]=0;
	}
	for(int i=1;i<=10;i++){
		dp[i][0]=1;
	}
	int ans=0,ex,in;
	for(int i=1;i<=10;i++){
		for(int j=1;j<N;j++){
			in=0;		
			if(j>=i){
				in=dp[i][j-i];
			}
			else{
				in=0;
			}
			ex=0;
			if(i==1){
			//	cout<<in<<" ";
			}
			ex=dp[i-1][j];
			dp[i][j]=in+ex;
			//ans=max(ans,dp[i][j]);
			//cout<<dp[i][j]<<" ";
		}
	}
	//cout<<dp[1][39]<<" ";
	int a;
	cin>>a;
	int idx=0;
	int flag=0;
	for(int i=1;i<=10;i++){
		for(int j=1;j<N;j++){
			if(dp[i][j]==a){
				idx=i;
				cout<<j<<" ";
				flag=1;
				break;
			}
		}
		if(flag){
			break;
		}
	}	
	cout<<idx<<endl;
	for(int k=1;k<=idx;k++){
		cout<<k<<" ";
	}
	
	// your code goes here
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define INF INT_MAX
int main(){
	int dp[3005];
	for(int i=1;i<=3005;i++){
		dp[i]=INF;
	}
	int n;
	cin>>n;
	int a[n+1],b[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]<a[j]){
				dp[i]=min(dp[i],b[i]+b[j]);
			}
		}
	}
	int ans=INF;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j] && dp[j]<INF){
				ans=min(ans,dp[j]+b[i]);
			}
		}
	}
	if(ans==INF){
		cout<<-1;
	}
	else{
		cout<<ans;
	}
}
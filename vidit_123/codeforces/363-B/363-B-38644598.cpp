#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int arr[n+1];
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	int ans=1,sum=0;
	for(int i=1;i<=k;i++){
		sum+=arr[i];
	}
	int i=1;
	int minsum=sum;
	for(int j=k+1;j<=n;j++){
		int tsum=sum-arr[i]+arr[j];
		i++;
		if(tsum<minsum){
			ans=i;
			minsum=tsum;
		//	sum=tsum;
		}
		sum=tsum;
	}
	cout<<ans;
}
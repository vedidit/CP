#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	int ans=1;
	for(int i=1;i<=n;){
		int cnt=1;
		int j=i+1;
		if(j==n+1){
			i=n+1;
			break;
		}
		while(1){
			if(j==n && arr[j]<=arr[j-1]){
				i=n+1;
				break;
			}
			if(j==n && arr[j]>arr[j-1]){
				i=n+1;
				cnt++;
				break;
			}
			if(arr[j]<=arr[j-1]){
				i=j;
				break;
			}
			else{
				cnt++;
				j++;
			}
		}
		ans=max(ans,cnt);
		
	}
	cout<<ans;
}
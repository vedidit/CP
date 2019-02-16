#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int arr[k+1];
		for(int i=1;i<=k;i++){
			cin>>arr[i];
		}

		int ans=0;
		for(int i=1;i<k;i++){
            ans=max(ans,1+(arr[i+1]-arr[i])/2);
		}
		ans=max(ans,arr[1]);
		ans=max(ans,n-arr[k]+1);
		cout<<ans<<endl;



	}
	// your code goes here
	return 0;
}
/*input
1
5 4 1
100 2 4 17 8
*/
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
#define int long long

main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,b;
		cin>>n>>k>>b;
		vector<int> arr(n);
		vector<int> pre;
		for(int i=0;i<n;i++){
			cin>>arr[i];

		}
		int ans=1;
		sort(arr.begin(),arr.end());
		pre.push_back(arr[0]);
		int pp=0;
		for(int i=1;i<n;i++){
			if(arr[i]>=(k*pre[pp]+b)){
				pp++;
				pre.push_back(arr[i]);
				ans++;
			}
		}
		cout<<ans<<endl;

	}


}
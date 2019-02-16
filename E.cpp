#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector< pair<int,int> > v;
		vector<int> sum[1000],diff[1000];
		char arr[n+1][m+1];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				char x;
				cin>>x;
				if(x=='1'){
					v.push_back({i,j});
					sum[i+j].push_back(j);
					if(j-i>=0){
                        diff[j-i].push_back(i);
					}
				}
			}
		}
		for(int i=1;i<=n+m;i++){
			sort(sum[i].begin(),sum[i].end());
			sort(diff[i].begin(),diff[i].end());
		}
		int ans[1000];
		for(int i=0;i<1000;i++){
			ans[i]=0;
		}
		for(int i=0;i<v.size();i++){
			for(int d=1;d<=n+m-2;d++){
				int x = v[i].first+v[i].second+d;
				int y = d-(v[i].first-v[i].second);
				ans[d]= ans[d] +lower_bound(sum[x].begin(),sum[x].end(),v[i].second)-sum[x].begin()
				+upper_bound(sum[x].begin(),sum[x].end(),v[i].second)-lower_bound(sum[x].begin(),sum[x].end(),v[i].second);
				ans[d]= ans[d] + upper_bound(diff[y].begin(),diff[y].end(),v[i].first-1)-diff[y].begin();
			}
		}
		for(int i=1;i<=n+m-2;i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;

	}
	// your code goes here
	return 0;
}

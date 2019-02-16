#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
#define int long long 
vector<int> adj[100005];
int visited[100005];
int parent[100005];
int cnt[100005];
void dfs(int s){
	if(visited[s]){
		return;
	}
	visited[s]=1;
	for(int i=0;i<adj[s].size();i++){
		if(!visited[adj[s][i]]){
			parent[adj[s][i]]=parent[s];
			dfs(adj[s][i]);
		}
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		for(int i=0;i<=n;i++){
			adj[i].clear();
			visited[i]=0;
			parent[i]=i;
			cnt[i]=0;
		}
		for(int i=0;i<m;i++){
			int x,y;
			cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		int a = 0;
		for(int i=1;i<=n;i++){
			if(!visited[i]){
				a++;
				dfs(i);	
			}	
		}
		for(int i=1;i<=n;i++){
			cnt[parent[i]]++;
		}
		int ans=1;
		for(int i=1;i<=n;i++){
			if(cnt[i]!=0){
				ans = (ans%mod*cnt[i]%mod)%mod;
			}
		}
		cout<<a<<" "<<ans<<endl;
	}
}
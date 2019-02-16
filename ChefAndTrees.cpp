#include<iostream>
using namespace std;
int cnt[10005];
int visited[10005];
int parent[10005];
vector<int> v[10005];
void dfs(int s){
	if(visited[s]==1){
		return;
	}
	for(int i=0;i<v[s].size();i++){
		if(!visited[s][i]){
			dist[v[s][i]]=dist[s]+1;
			cnt[dist[v[s][i]]]++;
			dfs(v[s][i]);
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n+1;i++){
			v[i].clear();
			cnt[i]=0;
			parent[i]=0;
		}

		for(int i=0;i<n-1;i++){
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
			if(parent[i]==0){
				parent[y]=x;
			}
		}
		for(int i=0;i<n+1;i++){
			visited[i]=0;
		}
		dist[1]=0;
		parent[1]=1;
		dfs(1);
		int maxdist=0;
		int node=-1;
		for(int i=1;i<=n;i++){
			maxdist = max(maxdist,dist[i]);
		}
		if(cnt[maxdist]==0){
			cout<<"NO\n";
		}
		else if(cnt[maxdist]==1){
			cout<<"YES\n";
		}
		else if(cnt[maxdist]>1){
			vector<int> pa;
			for(int i=1;i<=n;i++){
				if(cnt[i] == maxdist )
					pa.push_back(parent[i]);
			}
			if(pa.size()==1){
				cout<<"YES\n";
			}else{
				cout<<"NO\n";
			}
		}

	}
}
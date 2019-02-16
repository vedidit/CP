#include<bits/stdc++.h>
using namespace std;
vector<int> v[100005];
int ans;
int visited[100005],subtree[100005];
void dfs(int s){
	visited[s]=1;
	for(int i=0;i<v[s].size();i++){
		if(!visited[v[s][i]]){
			visited[v[s][i]]=1;
			dfs(v[s][i]);
			subtree[s]=subtree[s]+subtree[v[s][i]]+1;
		}
	}
	if(s!=1 &&(subtree[s]+1)%2==0){
		ans++;
	}
}

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n-1;i++){
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	dfs(1);
	if((n)%2!=0){
		cout<<-1;
		return 0;
	}
	cout<<ans<<endl;
	
}
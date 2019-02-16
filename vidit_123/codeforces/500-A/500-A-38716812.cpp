#include<bits/stdc++.h>
using namespace std;
vector<int> v[40005];
int visited[40005];
void dfs(int s ){
	visited[s]=1;
	for(int i=0;i<v[s].size();i++){
		if(!visited[v[s][i]]){
			visited[v[s][i]]=1;
			dfs(v[s][i]);
		}
	}
	return;
}
int main(){
	int n,t;
	cin>>n>>t;
	for(int i=1;i<=n-1;i++){
		int x;
		cin>>x;
		v[i].push_back(x+i);
	}
	dfs(1);
	if(visited[t]==1){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
}
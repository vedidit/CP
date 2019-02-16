#include<iostream>
using namespace std;
int visited[1005];
int arr[1005];
void dfs(int s){
	if(visited[s]==1){
		return;
	}
	visited[s]=1;
	cout<<s<<" ";
	dfs(arr[s]);
}
void dfs2(int s){
	if(visited[s]==1){
		return;
	}
	visited[s]=1;
	dfs2(arr[s]);
}
int main(){
	int n;
	cin>>n;
	for (int i = 1; i <= n; i++){
		cin>>arr[i];
		visited[i]=0;
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			cnt++;
			dfs2(i);
		}
	}
	cout<<cnt<<endl;
	for(int i=0;i<=n;i++){visited[i]=0;}
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			dfs(i);
			cout<<i<<endl;
		}
	}

}
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int arr[n+1];
	int pre[n+1];
	pre[0]=0;
	int mark[100005];
	for(int i=1;i<=n;i++){
		pre[i]=0;
		
		cin>>arr[i];
	}
	for(int i=0;i<100005;i++){
		mark[i]=0;
	}
	pre[n]=1;
	mark[arr[n]]=1;
	for(int i=n-1;i>=1;i--){
		if(!mark[arr[i]]){
			mark[arr[i]]=1;
			pre[i]=pre[i+1]+1;
		}
		else{
			pre[i]=pre[i+1];
		}
	}
	while(m--){
		int l;
		cin>>l;
		cout<<pre[l]<<endl;
	}
	
}
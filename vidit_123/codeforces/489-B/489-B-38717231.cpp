#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n;
	int arr[n+1];
	unordered_map<int,int> a,b;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		a[arr[i]]++;
	}
	cin>>m;
	int brr[m+1];
	for(int i=1;i<=m;i++){
		cin>>brr[i];
		b[brr[i]]++;
	}
	int ans=0;
	for(int i=1;i<=100;i++){
		if(a[i]!=0 && b[i-1]!=0){
			ans+=min(b[i-1],a[i]);
			int x=min(a[i],b[i-1]);
			a[i]-=x;
			b[i-1]-=x;
		}
		if(a[i]!=0 && b[i]!=0){
			ans+=min(b[i],a[i]);
			int x=min(a[i],b[i]);
			a[i]-=x;
			b[i]-=x;
		}
		
		if(a[i]!=0 && b[i+1]!=0){
			ans+=min(b[i+1],a[i]);
			int x=min(a[i],b[i+1]);
			a[i]-=x;
			b[i+1]-=x;
		}
	}
	
	for(int i=1;i<=100;i++){
		if(b[i]!=0 && a[i-1]!=0){
			ans+=min(a[i-1],b[i]);
			int x=min(b[i],a[i-1]);
			b[i]-=x;
			a[i-1]-=x;
		
		}
		if(a[i]!=0 && b[i]!=0){
			ans+=min(b[i],a[i]);
			int x=min(a[i],b[i]);
			a[i]-=x;
			b[i]-=x;
		}
		
		if(b[i]!=0 && a[i+1]!=0){
			ans+=min(a[i+1],b[i]);
			int x=min(b[i],a[i+1]);
			b[i]-=x;
			a[i+1]-=x;
		}
	}
	
	cout<<ans;
}
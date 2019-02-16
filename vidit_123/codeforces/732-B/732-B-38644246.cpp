#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int arr[n+1];
	int add[n+1];
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		add[i]=0;
	}
	if(n==1 && arr[1]<k){
		cout<<0<<endl;
		cout<<arr[1]<<endl;
		
		return 0;
	}
	add[1]=arr[1];
	int ans=0;
	
	for(int i=2;i<=n;i++){
		if(arr[i]+add[i-1]<k){
			add[i]=k-add[i-1];
			ans+=k-(arr[i]+add[i-1]);
		}
		else{
			add[i]=arr[i];
		}
	}
	cout<<ans<<endl;
	for(int i=1;i<=n;i++){
		cout<<add[i]<<" ";
	}
	
	
}
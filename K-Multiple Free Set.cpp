#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long 
main() {
	int n,k;
	cin>>n>>k;
	int arr[n];
	unordered_map<int,bool> mark,check;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	sort(arr,arr+n);
	int ans=0;
	for(int i=0;i<n;i++){
		if(check[arr[i]]==false){
			check[arr[i]]=true;
			ans++;
			check[arr[i]*k]=true;
		}
	}
	
	cout<<ans<<endl;
	
	// your code goes here
	return 0;
}
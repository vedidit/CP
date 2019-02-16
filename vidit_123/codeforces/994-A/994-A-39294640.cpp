#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	unordered_map<int,int> chk;
	for(int i=0;i<m;i++){
		int x;
		cin>>x;
		chk[x]=1;
	}
	vector<int> v;
	for(int i=n-1;i>=0;i--){
		if(chk[arr[i]]==1){
			v.push_back(arr[i]);
		}
	}
	for(int i=v.size()-1;i>=0;i--){cout<<v[i]<<" ";}
	// your code goes here
	return 0;
}
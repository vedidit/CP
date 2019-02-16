#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
	int idx;
	int val;
};
bool cmp(node a,node b){
	if(a.val == b.val){
		return a.idx<b.idx;
	}return a.val<b.val;
}
int main() {
	int n;
	// 1 3 3 3 4 4 4 4 4 4 
	//  
	cin>>n;
	struct node arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i].val;
		arr[i].idx=i;
	}
	int ans[n];
	sort(arr,arr+n,cmp);
	
	int x=arr[0].val;
	
	ans[arr[0].idx]=x;
	for(int i=1;i<n;i++){
		if(arr[i-1].val>=arr[i].val){
			ans[arr[i].idx] = max(arr[i-1].val,arr[i].val)+1;
			arr[i].val = max(arr[i-1].val,arr[i].val)+1;
		}else{
			ans[arr[i].idx] = arr[i].val;
		}
	}
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}

	// your code goes here
	return 0;
}
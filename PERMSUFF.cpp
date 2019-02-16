#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;
struct node{
	int l,r;
};
bool cmp(node a,node b){
	if(a.l == b.l){
		return a.r<b.r;
	}
	return a.l<b.l;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int arr[n+1];
		node q[m+1];
		for(int i=1;i<=n;i++){
			cin>>arr[i];
		}
		for(int i=1;i<=m;i++){
			cin>>q[i].l>>q[i].r;
		}
		sort(q+1,q+m+1,cmp);
		vector<pair<int,int>> merge_ranges;
		
		for(int i=1;i<=m;i++){
			int k=i;
			while(k<m && q[i].l == q[k].l){
				k++;
			}
			int start=q[i].l;
			int j=k;
			while(j<m && q[j+1].l == q[j].r){
				j++;
			}
			int end = q[j].r;
			i=j;
			cout<<j<<" ";
			cout<<start<<end<<"   ";
			merge_ranges.push_back({start,end});
		}
		int possible = true;
		for(int i=0;i<merge_ranges.size();i++){
			cout<<merge_ranges[i].first<<merge_ranges[i].second<<" ";
			for(int j=merge_ranges[i].first;j<=merge_ranges[i].second;j++){
				if(arr[j]<merge_ranges[i].first || arr[j]>merge_ranges[i].second){
					possible=false;
				}	
			}
		}
		if(!possible){
			cout<<"Impossible\n";
		}else{
			cout<<"Possible\n";
		}
		
	}
	return 0;
}
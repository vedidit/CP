#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
	int ff;
	int id;
	int ss;
}q[100005];
bool cmp(node a,node b){
	if(a.ff!=b.ff){
		return a.ff<b.ff;
	}	
	else{
		return a.ss<b.ss;
	}
}
int main() {
	int n,k;
	cin>>n>>k;
	vector<pair<int,int>> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i].first;
	}
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v[i].second=x;
		q[i].ff=v[i].first;
		q[i].ss=v[i].second;
		q[i].id=i;
	}
	sort(v.begin(),v.end());
	sort(q,q+n,cmp);
	
	multiset<int> ms;
	for(int i=0;i<v.size();i++){
		ms.insert(v[i].second);
	//	cout<<v[i].second<<" ";
	}
	long long int ans[n];
	for(int i=v.size()-1;i>=0;i--){
		ms.erase(ms.find(v[i].second));
		if(ms.size()>0){
			int x=1;
			long long sum=v[i].second;
			for(auto it=ms.rbegin();x<=min((int)ms.size(),k);it++){
				long long int y=*it;
				x++;
				sum+=y;
			}
		//	cout<<sum<<" ";
			ans[q[i].id]=sum;
		}
		else{
			ans[q[i].id]=v[i].second;
		}
		
	}
	
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
	
	// your code goes here
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,b;
	cin>>n>>b;
	int arr[n];
	int odd[n],eve[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		odd[i]=eve[i]=0;
	}
	if(arr[0]%2==0){
		eve[0]=1;
	}
	else{
		odd[0]=1;
	}
	vector<int> pos;
	for(int i=1;i<n;i++){
		if(arr[i]%2==0){
			eve[i]+=eve[i-1]+1;
			odd[i]=odd[i-1];
		}
		else if(arr[i]%2!=0){
			eve[i]=eve[i-1];
			odd[i]+=odd[i-1]+1;
		}
		if(eve[i]==odd[i]){
			pos.push_back(i);
		}
	}
	if(pos.size()==0 || pos.size()==1){
		cout<<0;
		return 0;
	}
	vector<int> cost;
	for(int i=0;i<pos.size();i++){
		if(pos[i]!=n-1){
		//	cout<<arr[pos[i]];
			cost.push_back(abs(arr[pos[i]+1]-arr[pos[i]]));
		//	cout<<cost[i]<<" ";
		}
	}
	int cnt=0;
	sort(cost.begin(),cost.end());
	for(int i=0;i<cost.size();i++){
		if(b>=cost[i]){
			b-=cost[i];
			cnt++;
		}
	}
	cout<<cnt;	
	
	
	// your code goes here
	return 0;
}
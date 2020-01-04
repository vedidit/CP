#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	int arr[n+1];
	int parent[n+1];
	int in[n+1],out[n+1];
	for(int i=0;i<=n;i++){in[i]=out[i]=0;}
	set<int>s,sc;
//	unordered_map<int,int> mp;
	for(int i=1; i<=n ; ++i){
		cin>> arr[i];
		if(arr[i]){out[i]=1;}
		in[arr[i]]=1;
		parent[arr[i]] = i; 
	}
	for(int i=1;i<=n;i++){
		if(!in[i]){
			s.insert(i);
			sc.insert(i);
	//		cout<<i<<" ";
		}
	//	cout<<in[i]<<" ";
	}
//	cout<<endl;
	for(auto it = s.begin(); it!=s.end(); ++it){
		if(!out[*it]){
			int x = *it;
		//	cout<<"X = "<<x<<" ";
			sc.erase(sc.find(*it));
			arr[*it]=*sc.begin();
			s.erase(s.find(*sc.begin()));
			sc.erase(*sc.begin());
			sc.insert(x);
			out[*it]=1;
		}
	}
	
 
//	exit(0);
	
	for(int i=1;i<=n;i++){
		if(!out[i]){
			arr[i]=*sc.begin();
			sc.erase(sc.begin());
		}
	//	cout<<arr[i]<<" ";
	}
	for(int i=1;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	// 5 3 1 2 4 
	// 7 0 0 1 4 0 6 
	// 7 5 3 1 4 2 6
	// 
	
	
	
	// your code goes here
	return 0;
}
#include <iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
#define int long long 
 main() {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		stack<int> s;
		int h[100005],col[100005],check[100005];
		for(int i=0;i<=m;i++){
			check[i]=0;
		}
		for(int i=0;i<n;i++){
			cin>>h[i];
		}
		for(int i=0;i<n;i++){
			cin>>col[i];
		}
		int ans=0;
		for(int i=0;i<n;i++){
			if(s.size()==0){
				s.push(i);
			}else if(s.size()!=0){
				while(s.size()>0 && h[s.top()]<=h[i]){
					s.pop();
				}s.push(i);
			}
		}
		while(s.size()){
			if(!check[col[s.top()]]){
				check[col[s.top()]]=1;
				ans++;
			}
			s.pop();
		}
		cout<<ans<<endl;
		
	}
	// your code goes here
	return 0;
}
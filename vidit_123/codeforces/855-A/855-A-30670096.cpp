#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string s;
	cin>>n;
	unordered_map<string,int> cnt;
	for(int i=1;i<=n;i++){
		cin>>s;
		cnt[s]++;
		if(cnt[s]>1){
			cout<<"YES\n";
		}
		if(cnt[s]==1){
			cout<<"NO\n";
		}
	}
	// your code goes here
	return 0;
}
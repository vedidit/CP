#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
//	cin>>n>>m;
	unordered_map<string,string> mark;
	cin>>n>>m;
	string a,b;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
	//	cout<<a<<" "<<b<<" ";
		mark[b]=a;
	}
	for(int i=1;i<=m;i++){
		cin>>a>>b;
		string temp;
		for(int j=0;j<b.size()-1;j++){
			temp+=b[j];
		}
	//	cout<<temp<<" ";
		cout<<a<<" "<<b<<" #"<<mark[temp]<<endl;
	}
	// your code goes here
	return 0;
}
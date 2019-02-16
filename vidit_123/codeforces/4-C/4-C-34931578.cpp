#include <bits/stdc++.h>
using namespace std;

int main() {
	unordered_map<string,int> chk;
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		if(chk[s]==0){
			chk[s]++;
			cout<<"OK\n";
			//v.push_back(s)
		}
		else if(chk[s]>0){
			cout<<s<<chk[s]<<endl;
			chk[s]++;
		}
		
		
	}
	return 0;
}
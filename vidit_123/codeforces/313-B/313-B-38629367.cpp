#include<bits/stdc++.h>
using namespace std;


int main(){
	string s;
	cin>>s;
	int pre[s.size()];
	for(int i=0;i<s.size();i++){
		pre[i]=0;
	}
	if((s[0]=='.' && s[1]=='.') || (s[0]=='#' && s[1]=='#')){
		pre[1]=1;
	}
	for(int i=1;i<s.size()-1;i++){
		if((s[i]=='.' && s[i+1]=='.') || (s[i]=='#' && s[i+1]=='#')){
			pre[i+1]=pre[i]+1;
		}
		else{
			pre[i+1]=pre[i];
		}
	}
	int m;
	cin>>m;
	while(m--){
		int l,r;
		cin>>l>>r;
		cout<<pre[r-1]-pre[l-1]<<endl;
	}
	
}
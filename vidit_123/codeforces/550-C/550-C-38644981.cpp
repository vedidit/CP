#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int ans=0;
	for(int i=0;i<s.size();i++){
			if((s[i]-'0')%8==0 || s[i]-'0' ==0){
					cout<<"YES\n";
					cout<<s[i]-'0';
					return 0;
				}
		for(int j=i+1;j<s.size();j++){
			if((s[j]-'0')%8==0 || s[j]-'0' ==0){
					cout<<"YES\n";
					cout<<s[j]-'0';
					return 0;
				}
				
			for(int k=j+1;k<s.size();k++){
			
				if((s[k]-'0')%8==0 || s[k]-'0' ==0){
					cout<<"YES\n";
					cout<<s[k]-'0';
					return 0;
				}
				int y=10*(s[i]-'0')+s[k]-'0';
				int u=10*(s[i]-'0')+s[j]-'0';
				int v=10*(s[j]-'0')+s[k]-'0';
				int x=100*(s[i]-'0')+10*(s[j]-'0')+s[k]-'0';
				if(x%8==0){
					cout<<"YES\n";
					cout<<x;
					return 0;
				}
				if(u%8==0){
					cout<<"YES\n";
					cout<<u;
					return 0;
				}if(v%8==0){
					cout<<"YES\n";
					cout<<v;
					return 0;
				}
				if(y%8==0){
					cout<<"YES\n";
					cout<<y;
					return 0;
				}
			}
		}
	}
	cout<<"NO";
}
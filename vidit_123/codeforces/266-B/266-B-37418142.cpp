#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	int g=0,b=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='B'){
			b++;
		}
		else{
			g++;
		}
	}
	if(g==0 || b==0){
		cout<<s<<endl;
		return 0;
	}
	else{
		for(int i=1;i<=t;i++){
			for(int j=0;j<s.size()-1;){
				if(s[j]=='B' && s[j+1]=='G'){
					s[j+1]='B';
					s[j]='G';
					j+=2;
				}
				else{
					j++;
				}
				
				
			}
			
		}
		cout<<s<<endl;
	}
}
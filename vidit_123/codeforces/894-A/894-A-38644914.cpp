#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int ans=0;
	for(int i=0;i<s.size();i++){
		for(int j=i+1;j<s.size();j++){
			for(int k=j+1;k<s.size();k++){
				string p="";
				p+=s[i];
				p+=s[j];
				p+=s[k];
				if(p=="QAQ"){
					ans++;
				}
			}
		}
	}
	cout<<ans;
}
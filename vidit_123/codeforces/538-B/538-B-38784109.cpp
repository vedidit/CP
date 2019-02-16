#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int t=n;
	int m=-1;
	while(t!=0){
		int x=t%10;
		m=max(x,m);
		t=t/10;
	}
	vector<string> v;
	string s=to_string(n);
	for(int i=1;i<=m;i++){
		string a;
		int found=0;
		for(int j=0;j<s.size();j++){
			if(s[j]!='0'){
				a=a+'1';
				found=1;
				int x=s[j]-'0';
				x--;
				s[j]=x+'0';
			}
			else if(found && s[j]=='0'){
				a=a+'0';
			}
		}
		v.push_back(a);
	}	
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}
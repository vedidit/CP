#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	vector<int> pos;
	int flag=0;
	pos.push_back(-1);
	for(int i=0;i<s.size();i++){
		if((int)s[i]>=65 && (int)s[i]<=90){
			pos.push_back(i);
			flag=1;
		}
		
	}
	pos.push_back(s.size());
	unordered_map<char,int> check;
	
	int ans;
	if(flag){
		
	//	cout<<"hi";
	ans=INT_MIN;
	for(int i=0;i<pos.size()-1;i++){
		check.clear();
		int cnt=0;
		for(int j=pos[i]+1;j<=pos[i+1]-1;j++){
		//	cout<<s[j]<<" ";
			if(check[s[j]]==0){
				cnt++;
				//cout<<cnt;
				check[s[j]]++;
			}
		}
		ans=max(ans,cnt);
	}
	}
	else{
		int cnt=0;
		check.clear();
		for(int j=0;j<s.size();j++){
			if(check[s[j]]==0 ){
				cnt++;
				check[s[j]]++;
			}
		}
		ans=cnt;	
	}
	
	cout<<ans;
	// your code goes here
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int sf=0,fs=0,n;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<n-1;i++){
		if(s[i]=='S' && s[i+1]=='F'){
			sf++;
		}	
		if(s[i]=='F'&&s[i+1]=='S'){
			fs++;
		}
	}
	//cout<<sf<<" ";
	if(sf>fs){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	// your code goes here
	return 0;
}
#include<iostream>
#include<string>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
		string s="abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
		reverse(s.begin(),s.end());
		for(int i=0;i<=k;i++){
			cout<<s[i];
		}
		cout<<endl;

	}
}
//10 pos
//dcbadcdc

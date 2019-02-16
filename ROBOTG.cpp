#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		string s;
		cin>>s;
		int dy=0,dx=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='L'){
				dy--;
			}if(s[i]=='R'){
				dy++;
			}if(s[i]=='U'){
				dx--;
			}if(s[i]=='D'){
				dx++;
			}
		}
		if(abs(dx)>=0 && abs(dx)<n && abs(dy)>=0 && abs(dy)<m){
			cout<<"safe\n";
		}else{
			cout<<"unsafe\n";
		}
	}

}
#include<iostream>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		int n;
		cin>>n;
		cin>>s;
		int cnt=0;
		if(s.size()==1 || s.size()==2){
			if(s[0]=='0' && s.size()==1){
				cnt=1;
			}
			else if(s.size()==2){
				if(s=="00"){
					cnt=2;
				}else{
					cnt=0;
				}
			}
			cout<<cnt<<endl;
		}else{
			for(int i=0;i<n;i++){
				if(s[i]=='0'){
					if(i-1>=0 && s[i-1]=='0' && i+1<n && s[i+1]=='0'){
						cnt++;
					}
				}
			}
			if(s[0]=='0' && s[1]=='0'){
				cnt++;
			}
			if(s[s.size()-1]=='0' && s[s.size()-2]=='0'){
				cnt++;
			}
			cout<<cnt<<endl;
		}
		
	}
}
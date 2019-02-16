#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,x,y;
	cin>>n>>x>>y;
	string s;
	cin>>s;
	s+='1';
	int cnt=0;
	for(int i=0;i<n;i++){
        if(s[i]=='1'){
            continue;
        }
        else if(s[i]=='0'){
            int j=i;
            cnt++;
            while(s[j]=='0'){
                j++;
            }
            i=j-1;
        }
	}
	if(cnt==0){
        cout<<0;
        return 0;
	}
	long long ans=min(x,y)*(cnt-1)*1LL + y*1LL;
	cout<<ans;

	return 0;
}
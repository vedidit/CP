/*
input
8 3
aeabcaez
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long 

 main(){
	int n,m;
	cin>>n>>m;
	string s,p;
	s="";
	cin>>p;
	s+=p;
	int ll=-1,rr=-1;
	int leftsum=0,rightsum=0;
	if(m>n/2){
		for(int i=m;i>=n/2;i--){
			if(s[n-i+1]!=s[i]){
				ll=i;
				leftsum+=abs(26-abs((int)s[i]-(int)s[n-i+1]));
			}
		}
		for(int i=m+1;i<=n;i++){
			if(s[n-i+1]!=s[i]){
				rr=i;
				rightsum+=abs(26-abs((int)s[i]-(int)s[n-i+1]));
			}	
		}
		if(ll==-1 && rr==-1){
			cout<<0;
			return 0;
		}else{
			if(ll==-1){
				cout<<rr-m;
				return 0;
			}if(rr==-1){
				cout<<m-ll;
				return 0;
			}else{
				int xx = (rr-m);
				int yy = (m-ll);
				cout<<min(2*xx+yy+leftsum+rightsum,2*yy+xx+rightsum+leftsum);
			}
		}

	}else if(m<=n/2){
		for(int i=m;i>=1;i--){
			if(s[n-i+1]!=s[i]){
				ll=i;
				leftsum+=abs(26-abs((int)s[i]-(int)s[n-i+1]));
			}
		}
		for(int i=m+1;i<=n/2;i++){
			if(s[n-i+1]!=s[i]){
				rr=i;
				rightsum+=abs(26-abs((int)s[i]-(int)s[n-i+1]));
			}	
		}
		if(ll==-1 && rr==-1){
			cout<<0;
			return 0;
		}else{
			if(ll==-1){
				cout<<rr-m;
				return 0;
			}if(rr==-1){
				cout<<m-ll;
				return 0;
			}else{
				int xx = (rr-m);
				int yy = (m-ll);
				cout<<min(2*xx+yy+leftsum+rightsum,2*yy+xx+rightsum+leftsum);
			}

		}
	}

}
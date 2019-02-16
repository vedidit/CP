#include <bits/stdc++.h>
using namespace std;
#define int long long
main() {
	int yell,b;
	cin>>yell>>b;
	int x,y,z;
	cin>>x>>y>>z;
	int yr=0;
	yr=2*x+y;
	int br=y+3*z;
	int ans=0;
	if(yell<=yr){
		ans+=abs(yell-yr);
	}
	if(br>=b){
		ans+=abs(br-b);
	}
	cout<<ans;
	// your code goes here
	return 0;
}
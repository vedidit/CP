#include <bits/stdc++.h>
using namespace std;

int main() {
	double n,m;
	cin>>n>>m;
	double ans=(double)INT_MAX;
	for(int i=1;i<=n;i++){
		double a,b;
		cin>>a>>b;
		double rate=a/b;
		double cost=rate*m;
		ans=min(ans,cost);
	}
	cout<<setprecision(10)<<ans;
	// your code goes here
	return 0;
}
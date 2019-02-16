#include <iostream>
using namespace std;
#define int long long 
main() {
	int t;cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		int x = b-a;
		int y = c-b;
		int aa = max(x,y)-min(x,y);
		int ans = aa/2 + aa%2;
		cout<<ans<<endl;
	}
	// your code goes here
	return 0;
}
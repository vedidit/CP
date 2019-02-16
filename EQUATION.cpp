#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c,n;
		cin>>n>>a>>b>>c;
		long long ans=0;
		for(int i=0;i<=b;i++){
			for(int j=0;j<=c;j++){
				int x  = n-i-j;
				if(x>=0)
					ans += min(a,x);
			}
		}
		cout<<ans<<endl;
	}

}
#include <bits/stdc++.h>
using namespace std;
#define A 1000005
#define int long long 
int divisors[A];
void pre(){
	for(int i=1;i<A;i++){
		for(int j=i*2;j<A;j+=i){
			divisors[j]++;
		}
		divisors[i]++;
	}
}
 main() {
	 int x,n;
	cin>>n;
	pre();
	int arr[n+1];
	for(int i=1;i<=n;i++){
		cin>>x;
		int p=sqrt(x);
		if(x==1){
			cout<<"NO\n";
		}
		
		else if(p*p==x){
			if(2*divisors[p]-1==3){
				cout<<"YES\n";
			}
			else{
				cout<<"NO\n";
			}
		}
		else if(p*p!=x){
			if(2*divisors[p]==3){
				cout<<"YES\n";
			}
			else{
				cout<<"NO\n";
			}
		}
	}
	// your code goes here
	return 0;
}
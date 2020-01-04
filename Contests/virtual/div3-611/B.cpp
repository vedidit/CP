#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		long long int n,k;
		cin>>n >>k;
		long long x = n/k;
		long long y = k/2;
		long long rem = n - x*k; 
		if((n%k)){
			if(rem >= k/2){
				cout << x*k + k/2;
			}else{
				cout << x*k + rem;
			}
		}else{
			cout << n ;
		}
		
		cout<<endl;
	}
	return 0;
}
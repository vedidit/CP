#include<iostream>
#include<algorithm>
using namespace std;
#define mod 1000000007
#define ll long long 

int main(){
	int t;
	cin>>t;
	while(t--){
		ll arr[3];
		cin>>arr[0]>>arr[1]>>arr[2];
		sort(arr,arr+3);		
		ll a = arr[0]%mod; //10^9
		ll b = (arr[1]-1)%mod; //10^9
		ll c = (arr[2]-2)%mod;//10^9
		ll ans = (a%mod*b%mod)%mod;
		ans = ans%mod;
		ans =  (ans%mod*c%mod)%mod;
		cout<<ans%mod<<endl;
		
	}
}
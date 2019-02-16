#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	unordered_map<int,int> cnt;
	int arr[n+1];
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		cnt[arr[i]]++;
	}
	sort(arr+1,arr+n+1);
	for(int i=n;i>=1;i--){
		if(cnt[arr[i]]%2!=0){
			cout<<"Conan";
			return 0;
		}
	}
	cout<<"Agasa";
	return 0;
}
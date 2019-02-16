#include <bits/stdc++.h>
using namespace std;
#define int long long
 main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=n-1;i>=0;i--){
		int x=sqrt(arr[i]);
		if(x*x != arr[i]){
			cout<<arr[i];
			return 0;
		}
	}
	// your code goes here
	return 0;
}
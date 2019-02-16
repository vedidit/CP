#include <iostream>
#include<limits.h>
using namespace std;
#define int long long
 main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int kadanea[n],kadaneb[n];
		long long ans=LONG_LONG_MIN;
		int sum=arr[0];
		kadanea[0]=arr[0];
		for(int i=1;i<n;i++){
			sum=max(arr[i],sum+arr[i]);
			ans = max(ans,sum);
			kadanea[i]=sum;
		}
		sum=arr[n-1];
		kadaneb[n-1]=arr[n-1];
		for(int i=n-2;i>=0;i--){
			sum = max(arr[i],sum+arr[i]);
			kadaneb[i]=sum;
		}
		for(int i=0;i<n;i++){
			long long x=0;
			if(i>0){
				x+=kadanea[i-1];
			}
			if(i<n-1){
				x+=kadaneb[i+1];
			}
			ans =max(ans,x);
		}
		cout<<ans<<endl;
	}
	// your code goes here
	return 0;
}
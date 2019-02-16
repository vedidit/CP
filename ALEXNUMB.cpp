#include<algorithm>
#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int dist=0;
		sort(arr,arr+n);
		for(int i=0;i<n;i++){
			dist++;
			int j=i;
			while(arr[j+1]==arr[i]){
				j++;
			}
			i=j;
		}
		long long ans = (dist-1)*(dist);
		cout<<(ans/2);
	}
}
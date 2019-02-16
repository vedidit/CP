#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int arr[m];
		int mini = INT_MAX;
		int maxi = INT_MIN;
		for(int i=0;i<m;i++){
			cin>>arr[i];
			mini = min(mini,arr[i]);
			maxi = max(maxi,arr[i]);
		}
		for(int i=0;i<n;i++){
			cout<<min(abs(mini-i),abs(maxi-i))<<" ";
		}
		cout<<endl;
	}
}
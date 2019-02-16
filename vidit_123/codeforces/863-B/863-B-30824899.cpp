#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int N=2*n;
	int arr[N];
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	sort(arr,arr+N);
	vector<int> v;
	
	int mainans=INT_MAX;
	//every pair as put it in single and find min instability
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			v.clear();
			for(int k=0;k<N;k++){
				if(k!=i && k!=j){
					v.push_back(arr[k]);
				}
			}
			int ans=0;
			//cout<<v.size();
			for(int k=0;k<v.size();k+=2){
				//cout<<v[k+1]<<" "<<v[k]<<" ";
				ans+=abs(v[k+1]-v[k]);
			}
			//cout<<endl;
			//cout<<ans<<" ";
			mainans=min(ans,mainans);
		}
	}
	cout<<mainans<<endl;
	// your code goes here
	return 0;
}
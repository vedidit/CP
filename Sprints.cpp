/*input
1
5
1 2 1 2 1
*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int sprints[n];
		for(int i=0;i<n;i++){
			cin>>sprints[i];
		}
		int diffarray[100005];
		for(int i=0;i<100005;i++){
			diffarray[i]=0;
		}
		for(int i=0;i<n-1;i++){
			int l = min(sprints[i],sprints[i+1]);
			int r = max(sprints[i],sprints[i+1]);
			diffarray[--l]--;
			diffarray[r]++;
		}
		for(int i=n-2;i>=0;i--){
			diffarray[i] = diffarray[i]+diffarray[i+1];
		}
		int ans=INT_MIN;
		
		int idx = -1;
		for(int i=0;i<100005;i++){
			ans = max(ans,diffarray[i]);
		}
		for(int i=0;i<100005;i++){
			if(diffarray[i]==ans){
				idx=i+1;
				break;
			}
		}
		cout<<idx<<endl;
	}


}
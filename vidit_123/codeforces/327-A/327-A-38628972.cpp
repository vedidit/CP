#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n+1];
	int total=0;
	for(int i=1;i<=n;i++){
		
		cin>>arr[i];
		if(arr[i]==1){
			total++;
		}
	}
	int ans=-1;
	for(int i=1;i<=n;i++){
		int a=0,b=0;
		
		for(int j=i;j<=n;j++){
			if(arr[j]==0){
				a++;
			}
			if(arr[j]==1){
				b++;
			}
			int p=total;
			p=p-b;
			p=p+a;
			ans=max(ans,p);
		}
		
	}
	cout<<ans<<endl;
}
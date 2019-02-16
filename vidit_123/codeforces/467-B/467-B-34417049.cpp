#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,k;
	cin>>n>>m>>k;
	int A[m+2];
	int arr[m+2][25];
	for(int i=1;i<=m+1;i++){
		for(int j=0;j<25;j++){
			arr[i][j]=0;
		}
	}
	
	for(int i=1;i<=m+1;i++){
		cin>>A[i];
		int x=A[i];
		int p=0;
		int temp[25]={0};
		while(x>0){
			temp[p]=x%2;
			x=x/2;
			p++;
		}
		for(int j=p-1;j>=0;j--){
			arr[i][j]=temp[j];
		}
	}
	int ans=0;
	for(int i=1;i<=m;i++){
		int val=0;
		for(int j=0;j<25;j++){
			if(arr[i][j]!=arr[m+1][j]){
				val++;
			}
		}
		if(val<=k){
			ans++;
		}
	}
	cout<<ans;
	
	
	return 0;
}
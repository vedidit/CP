#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int leftprefix[n+50][m+50];
		int rightprefix[n+50][m+50];
		char arr[n+5][m+5];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>arr[i][j];
			}
		}
		for(int i=0;i<=n+5;i++){
			for(int j=0;j<=m+5;j++){
				leftprefix[i][j]=0;
				rightprefix[i][j]=0;
			}
		}
		for(int i=2;i<=n;i++){
			for(int j=;j<=m;j++){
				if(i==j && arr[i][j]=='1'){
					leftprefix[i][j]+=prefix[i-1][j-1]
				}
			}
		}
	}
	// your code goes here
	return 0;
}
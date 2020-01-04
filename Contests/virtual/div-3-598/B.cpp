#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n+1];
		int pos[n+1];
		bool swapped[n+1];
		int finalarr[n+1];
		for(int i=1;i<=n;i++){
			swapped[i]=false;
			cin>>arr[i];
			pos[arr[i]]=i;
		}
 
		int op=n-1;
		for(int i=1;i<=n;i++){
			int x = pos[i];
			while(true){
				if(x-1 && !swapped[x-1] && x>i && op && arr[x-1]>arr[x]){
					swapped[x-1]=true;
					int xx = arr[x-1];
					arr[x-1] = i;
					arr[x] = xx;
					x--;
					op--;
				}
				else{
					break;
				}
			}
		}
		
 
		for (int i = 1; i <= n; ++i){
			cout<<arr[i]<<" ";
		}
 
		cout<<endl;
 
	}
}
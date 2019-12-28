#include<bits/stdc++.h>
#include <iostream>
using namespace std;
  
int main() {
	int n;
	cin>>n;
	int arr[n+1];
	int ans = 1;
	int ending[n+1];
	int starting[n+1];
	
	for(int i=1; i<=n; i++){
		cin>>arr[i];
	}
	
	ending[1] = 1;
	
	int templen=1;
	for(int i=2; i<=n; ++i){
		if(arr[i]>arr[i-1]){
			templen++;
			ending[i]=templen;
		}else if(arr[i]<=arr[i-1]){
			templen=1;
			ending[i]=templen;
		}
	}
 
	for(int i=1; i<=n;){
		int j=i+1;
		templen=1;
		while(j<=n){
			if(arr[j]>arr[j-1]){
				templen++;
				j++;
			}
			else if(arr[j]<=arr[j-1]){
				for(int k=i; k<j; k++){
					starting[k]=templen;
					templen--;
				}
				break;
			}
		}
		if(j==n+1){
			for(int k=i; k<j; k++){
				starting[k]=templen;
				templen--;
			}
			break;
		}
		i=j;
	}
 
	for(int i=2;i<=n-1;i++){
		if((arr[i-1]<arr[i+1])){
			ans = max(ans,starting[i+1]+ending[i-1]);
		}
	}
	
	for(int i=2;i<=n;i++){
		ans = max(ans,ending[i]);
	}
	cout<<ans<<endl;
	
	return 0;
}
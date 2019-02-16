#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	char arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	long ans=0;
	for(int i=0;i<n;i++){
		
		for(int j=0;j<n;j++){

			if(arr[i][j]=='X'){
				int ok=1;
				if(i-1>=0){
					if(j-1>=0){
						if(arr[i-1][j-1]!='X'){
							ok=0;
						}
					}
					if(j+1<n){
						if(arr[i-1][j+1]!='X'){
							ok=0;
						}
					}
				}if(i+1<n){
					if(j-1>=0){
						if(arr[i+1][j-1]!='X'){
							ok=0;
						}
					}
					if(j+1<n){
						if(arr[i+1][j+1]!='X'){
							ok=0;
						}
					}
				}
				
				if(i+1>=n || j+1>=n || j-1<0 || i-1<0){
					ok=0;
				}
				if(ok){
					ans++;
				}
			}
			}
	}
	cout<<ans<<endl;
	// your code goes here
	return 0;
}
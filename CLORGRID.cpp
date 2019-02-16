/*input
2
3 3
..#
...
...
3 3
###
###
###
*/

#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		char s[n][m];
		bool arr[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>s[i][j];
				arr[i][j]=false;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(s[i][j]!='#'){
					if(i-1>=0 && j-1>=0){
						if(s[i-1][j-1]=='.' && s[i-1][j]=='.' && s[i][j-1]=='.'){
							arr[i][j]=true;
						}
					}if(j-1>=0 && i+1<n){

						if(s[i+1][j-1]=='.' && s[i][j-1]=='.' && s[i+1][j]=='.'){
							arr[i][j]=true;
						}
					}if(i-1>=0 && j+1<m){
						if(s[i-1][j+1]=='.' && s[i-1][j]=='.' && s[i][j+1]=='.'){
							arr[i][j]=true;
						}
					}if(i+1<n && j+1<m){
						if(s[i+1][j+1]=='.' && s[i+1][j]=='.' && s[i][j+1]=='.'){
							arr[i][j]=true;
						}
					}
				}
			}
		}
		bool ans=true;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(arr[i][j]==false && s[i][j]=='.'){
					ans=false;
					break;
				}
			}
		}
		if(ans){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
		
	}

}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,p,m;
	cin>>n>>m>>p;
	char s[n+1][m+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>s[i][j];
		//	cout<<s[i][j]<<" ";
		}
	}
	int cnt=0;
	
	for(int i=1;i<=n;i++){
		int tcnt=0;
		int k=1;
		while(k<=m){
			if(s[i][k]=='*' || k==m){
				if(k==m && s[i][k]=='.'){
					tcnt++;
				}
				//cout<<tcnt<<" ";
				if(tcnt>=p)
				{cnt=cnt+tcnt-p+1;
				}
				k++;
				tcnt=0;
			}
			else if(s[i][k]=='.'){
				
				tcnt++;
				k++;
			}
			//	k++;
			
			
		}
		
	}
	if(p>1){
	for(int i=1;i<=m;i++){
		int tcnt=0;
		int k=1;
		while(k<=n){
			if(s[k][i]=='*' || k==n){
				if(s[k][i]=='.' && k==n){
					tcnt++;
				}
				//cout<<k<<" ";
				//cout<<tcnt-p+1<<" ";
				if(tcnt>=p)
				
				{cnt=cnt+tcnt-p+1;}
				tcnt=0;
				k++;	
			}
			else if(s[k][i]=='.'){
				tcnt++;
				k++;
			}
		}
	}
	}
	cout<<cnt;
	// your code goes here
	return 0;
}
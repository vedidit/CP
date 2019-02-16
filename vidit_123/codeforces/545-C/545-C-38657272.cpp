#include<bits/stdc++.h>
using namespace std;
const int N=100005;
int main(){
	int n;
	cin>>n;
	int pos[N],ht[N];
	for(int i=1;i<=n;i++){
		cin>>pos[i]>>ht[i];
		//x[i]=0;
	}
	bool lused[N],rused[N];
	for(int i=0;i<N;i++){
		lused[i]=rused[i]=false;
	}
	int ans=1;
	for(int i=2;i<=n;i++){
		if(lused[i]==true && rused[i]==true && i!=n){
			continue;
		}
		else{
		if(i==n){
			ans++;
		}
		else{
			if(pos[i]-pos[i-1]>ht[i] && lused[i]==false ){
				lused[i]=true;
				ans++;
				
			}
			else if(pos[i+1]-pos[i]>ht[i] && rused[i]==false){
				if(pos[i+1]-pos[i]-ht[i]<=ht[i+1]){
					lused[i+1]=true;
				//	rused[i+1]=true;
				}
				ans++;
			}
		}
		}
	}
	cout<<ans;
	
	
}
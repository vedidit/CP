#include<bits/stdc++.h>
using namespace std;

int main(){
	int nr;
	cin>>nr;
	int p=0,n=0;
	unordered_map<int,int> marked;
	for(int i=0;i<nr;i++){
		int x;
		cin>>x;
		if(x>0 && marked[x]==0){
			p++;
			marked[x]=1;
		}
		if(x<0 && marked[x]==0){
			n++;
			
			marked[x]=1;
		}
	}
	cout<<(long long )(n+p);
}
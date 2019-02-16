/*
input
6 6
6 6 6 6 6 6
6 66 666 6666 66666 666666
1 6
2 13
3 6
4 11
5 6
6 6
*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long
 main() {
	priority_queue< pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>  > pq;
	
	int n,m;
	cin>>n>>m;
	int cost[n+1],quant[n+1];
	for(int i=1;i<=n;i++){
		cin>>quant[i];
	}
	for(int i=1;i<=n;i++){
		cin>>cost[i];
		pq.push(make_pair(cost[i],i));
	}
	while(m--){
		int a,b;
		cin>>a>>b;
		if(quant[a]>=b){
			cout<<(b*cost[a])<<endl;
			quant[a]-=b;
		}else if(quant[a]<b){
			int ans = 0;
			ans = ans + quant[a]*cost[a];
			b-=quant[a];
			quant[a]=0;
		
			while(b!=0 && pq.size()>0){
				pair<int,int> p;
				p = pq.top();
			//	cout<<p.first<<" ";
				if(quant[p.second]==0){
					pq.pop();
					continue;
					
				}else if(quant[p.second]>0){
					ans  = ans + p.first*(min(quant[p.second],b));
					int idx = p.second;
					if(b>quant[idx]){				
						
						b-=quant[idx];
						quant[idx]=0;
						pq.pop();
					}
					else if(b<=quant[idx]){
						quant[idx]-=b;
						b=0;
					}
				}
				
			//	cout<<b<<" ";
		
			}
			if(b){
				cout<<0<<endl;
			}else{
				cout<<ans<<endl;
			}

		}
	}

	// your code goes here
	return 0;
}
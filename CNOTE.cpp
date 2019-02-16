#include<iostream>
#include<algorithm>
using namespace std;
struct node{
	int a,b;
};
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,k,n;
		cin>>x>>y>>k>>n;
		node arr[n];
		int req = x-y;
		bool ok=false;
		for(int i=0;i<n;i++){
			int a,b;
			cin>>a>>b;
			if(req<=a && b<=k){
				ok=true;
			}
		}
		if(!ok){
			cout<<"UnluckyChef\n";
		}else{
			cout<<"LuckyChef\n";
		}
	}
}
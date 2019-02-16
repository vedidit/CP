#include <iostream>
#include<vector>
using namespace std;
vector<pair<int,int>> ans;
void print_ulta(int startrow,int startcol){
		for(int j=startcol;j>=1;j--){
			ans.push_back({startrow,j});
		}
	
}
void print_seedha(int startrow,int startcol,int n,int m ){
		for(int j=startcol;j<=m;j++){
			ans.push_back({startrow,j});
		}

}
int main() {
	int n,m,k;
	cin>>n>>m>>k;
	int cells = n*m;
	//2 3 1
	//6 k=1
	int y = 1;
	int x = 1;
	int turn=1;
	for(int i=1;i<=n;i++){
		if(turn%2!=0){
			print_seedha(y,1,n,m);
		}else{
			print_ulta(y,m);
		}
		turn++;
		y++;
	}
	int i;
	
	for( i=0;i<k-1;i++){
		cout<<"2 ";
		cout<<ans[2*i].first<<" "<<ans[2*i].second<<" ";
		cout<<ans[2*i+1].first<<" "<<ans[2*i+1].second<<" ";
		cout<<endl;
	}
	int p = ans.size()-2*(k-1);
	cout<<p<<" ";
	for(int j=2*(k-1);j<ans.size();j++){
		cout<<ans[j].first<<" "<<ans[j].second<<" ";
	}
	
	
	// your code goes here
	return 0;
}
/*input
1
6 6
1 2
2 3
3 1
1 4 
2 5
3 6
*/
#include<bits/stdc++.h>
using namespace std;
int bs(vector<int> arr,int lo,int hi,int target){
	while(lo<=hi){
		int mid = (lo+hi)/2;
		if(arr[mid]==target){

			return mid;
		}else if(arr[mid]<target){
			lo=mid+1;
		}else{
			hi=mid-1;
		}
	}
	return -1;
}

int main(){

	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<int> v[n+1];
		for(int i=0;i<m;i++){
			int x,y;
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		int min_trio_ans=INT_MAX;
		int check=INT_MAX;
		for(int i=1;i<=n;i++){
			for(int j=0;j<v[i].size();j++){
				for(int k=j+1;k<v[i].size();k++){
					int a = i;
					int b = v[i][j];
					int c = v[i][k];
					bool ok=true;
					bool ok2=true;

					if(bs(v[j],0,v[j].size()-1,a)==-1 || bs(v[j],0,v[j].size()-1,c)==-1){
						ok2=false;
					}
					if(bs(v[k],0,v[k].size()-1,a)==-1 || bs(v[k],0,v[k].size()-1,b)==-1){
						ok2=false;
					}
					if(bs(v[i],0,v[i].size()-1,c)==-1 || bs(v[i],0,v[i].size()-1,b)==-1){
						ok2=false;
					}

					if(binary_search(v[j].begin(),v[j].end(),a)==-1 || binary_search(v[j].begin(),v[j].end(),c)==-1){
						ok=false;
					}
					if(binary_search(v[k].begin(),v[k].end(),a)==-1 || binary_search(v[k].begin(),v[k].end(),b)==-1){
						ok=false;
					}
					if(binary_search(v[i].begin(),v[i].end(),c)==-1 || binary_search(v[i].begin(),v[i].end(),b)==-1){
						ok=false;
					}

					if(ok){
						int val  = v[i].size()+v[j].size()+v[k].size()-6;
						min_trio_ans  = min(min_trio_ans,val);
					}


					if(ok2){
						int val  = v[i].size()+v[j].size()+v[k].size()-6;
						cout<<"hi";
						check  = min(check,val);
					}
				}
			}
		}
		if(min_trio_ans == INT_MAX){
			cout<<-1<<endl;
		}else{
			cout<<min_trio_ans<<" "<<check<<endl;
		}
	}


}
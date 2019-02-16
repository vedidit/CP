#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int arr[n];
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	int flag=0;
	for(int i=0;i<pow(2,n);i++){
		int cnt=0;
		vector<int> ans;
		for(int j=0;j<n;j++){
			if(i&j){
				cnt+=arr[j];
				ans.push_back(j+1);
			}
		}
		if((sum-cnt)!=cnt && cnt!=0 && sum!=0 && ans.size()>0){
			cout<<ans.size()<<endl;
			for(int k=0;k<ans.size();k++){
				cout<<ans[k]<<" ";
				flag=1;
			
			}
			return 0;	
		}
		
	}
	cout<<-1;
	return 0;
	// your code goes here
}
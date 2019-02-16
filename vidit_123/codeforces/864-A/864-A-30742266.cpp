#include <bits/stdc++.h>
using namespace std;

int main() {
	//equal count of each type of card
	//different types of cards should be of even ccount 
	int n;
	cin>>n;
	int arr[n+1];
	unordered_map<int,int> different,cnt;
	vector<int> v;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		if(different[arr[i]]==0){
			different[arr[i]]=1;
			v.push_back(arr[i]);
		}
		cnt[arr[i]]++;
	}
	int check=cnt[arr[1]];
	int flag=0;
	for(int i=2;i<=n;i++){
		if(cnt[arr[i]]!=check){
			flag=1;
		}
	}
	if(v.size()==2 && flag==0){
		cout<<"YES\n";
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
		}
	}
	else{
		cout<<"NO";
	}
	// your code goes here
	return 0;
}
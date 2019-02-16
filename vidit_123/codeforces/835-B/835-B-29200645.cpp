#include <iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;

int main() {
	int k;
	char n[1000005];
	cin>>k>>n;
	long long int sum=0;
	vector<int> v;
	for(int i=0;i<strlen(n);i++){
		sum=sum+(n[i]-'0');
		v.push_back(n[i]-'0');
	}
	sort(v.begin(),v.end());
	if(sum>=k){
		cout<<0<<endl;
	}
	
	else{
		int cnt=0;
		for(int i=0;i<v.size();i++){
			sum=sum-v[i]+9;
			if(sum>=k){
				cnt++;
				break;
			}
			if(sum<k){
				cnt++;
			}
		}
		
		cout<<cnt;
	}
	
	
	// your code goes here
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	unordered_map<unsigned long long int,unsigned long long int> val;
	unsigned long long int num,x=1;
	int n;
	for(int i=1;i<=50000000;i++){
		if(x>10000){
			break;
		}
		int temp=i;
		int sum=0;
		while(temp!=0){
			sum+=temp%10;
			temp=temp/10;
		}
		if(sum==10){
			val[x]=i;
			x++;
		}
	}
	cin>>n;
	
	cout<<val[n];
	//cout<<x;
	
	// your code goes here
	return 0;
}
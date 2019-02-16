#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	unordered_map<int,int> fib,mark;
	fib[0]=1;
	fib[1]=1;
	mark[0]=1;
	mark[1]=1;
	for(int i=2;i<=12000;i++){
		int x=fib[i-1]+fib[i-2];
		if(x>1000){
			break;
		}
		else{
			fib[i]=x;
			mark[x]=1;
		}
	}
//	cout<<fib[8];
	for(int i=1;i<=n;i++){
		if(mark[i]>0){
			cout<<"O";
		}
		if(mark[i]==0){
			cout<<"o";
		}
	}
	// your code goes here
	return 0;
}
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long
main() {
	int n;
	cin>>n;
	int a[n],b[n],p[n],q[n];
	
	for(int i=0;i<n;i++){
		p[i]=q[i]=0;
		cin>>a[i];
		b[i]=a[i];
	}
	
	sort(b,b+n);
	q[0]=b[0];
	p[0]=a[0];
	for(int i=1;i<n;i++){
		p[i]=p[i-1]+a[i];
		q[i]=q[i-1]+b[i];
	}
	int Q;
	cin>>Q;
	while(Q--){
		int l,r,t;
		cin>>t>>l>>r;
		--l;
		--r;
		if(t==2){
			if(l==0){
				cout<<q[r]<<endl;
			}else{
			cout<<q[r]-q[l-1]<<endl;	
		}
		}else if(t==1){
			if(l==0){
				cout<<p[r]<<endl;
			}else{
				cout<<p[r]-p[l-1]<<endl;
			}	
			
		}
	}
	
	
	// your code goes here
	return 0;
}
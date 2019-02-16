#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	long long int l1,r1,l2,r2,k;
	cin>>l1>>r1>>l2>>r2>>k;
	if(r2<l1 || l2>r1){
		cout<<0;
		return 0;
	}
	else{
		if(k<=min(r1,r2) && k>=max(l1,l2)){
			cout<<min(r1,r2)-max(l1,l2);
		}
		else{
			cout<<min(r1,r2)-max(l1,l2)+1;
		}
	}
	
	
	// your code goes here
	return 0;
}
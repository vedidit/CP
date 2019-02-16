#include <iostream>
using namespace std;

int main() {
	int k;
	cin>>k;
	int mx=0;	
	int x;
	for(int i=1;i<=k;i++){
		cin>>x;
		mx=max(mx,x);
	}
	if(mx>25){
		cout<<mx-25;
	}
	else{
		cout<<0;
	}
	// your code goes here
	return 0;
}
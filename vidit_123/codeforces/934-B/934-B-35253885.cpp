#include <iostream>
using namespace std;

int main() {
	int k;
	cin>>k;
	if(k>36){
		cout<<-1;
		return 0;
	}
	if(k==1){
		cout<<9;
		return 0;
	}
	else{
		int x=k/2;
		int y=k-(x*2);
		
		for(int i=1;i<=x;i++){
			cout<<8;
		}
		for(int i=1;i<=y;i++){
			cout<<0;
		}
		return 0;
		
	}
	
	
	// your code goes here
	return 0;
}
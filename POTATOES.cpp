#include<iostream>
using namespace std;
int isprime[2050];
void sieve(){
	for(int i=0;i<2050;i++){
		isprime[i]=1;
	}
	isprime[0]=isprime[1]=0;
	for(int i=2;i<2050;i++){
		if(isprime[i]){
			for(int j=i*2;j<2050;j+=i){
				isprime[j]=0;
			}
		}
	}
}
int main(){
	int t;
	cin>>t;
	sieve();
	while(t--){
		int x,y;
		cin>>x>>y;
		for(int i=2;;i++){
			if(isprime[i] && i>x+y){
				cout<<i-x-y<<endl;
				break;
			}
		}
	}
}
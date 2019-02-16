#include <iostream>
using namespace std;

int main() {
	int s,v1,v2,t1,t2;
	cin>>s>>v1>>v2>>t1>>t2;
	int T1=(s*v1)+2*t1;
	int T2=(s*v2)+2*t2;
	
	if(T1>T2){
		cout<<"Second";
	}
	 if(T1<T2){
		cout<<"First";
	}
	if(T1==T2){
		cout<<"Friendship";
	}
	
	
	// your code goes here
	return 0;
}
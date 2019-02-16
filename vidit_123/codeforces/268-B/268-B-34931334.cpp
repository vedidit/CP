#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	long long ans=0;
	for(int i=1;i<=n;i++){
		ans=ans+(n-i)*i+1;
	}
	cout<<ans;
	// your code goes here
	return 0;
}
#include <iostream>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
		int hh,mm;
		cin>>hh>>mm;
		cout<< 1440 - (hh*60 + mm) <<endl;
	}
	// your code goes here
	return 0;
}
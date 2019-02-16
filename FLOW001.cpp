/*input
1
1 3
*/
#include <iostream>
using namespace std;

int main() {
	int t;
	int a;
	int b;
	int sum=0;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
	cin>>a>>b;
	sum=a+b;
	
	cout<<sum<<"\n";
	
	}
		
		
	
	return 0;
}
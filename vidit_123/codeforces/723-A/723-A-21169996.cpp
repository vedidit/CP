#include <iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	
	int arr[3];
	arr[0]=a;arr[1]=b;arr[2]=c;
	sort(arr,arr+3);
	
	int ans=0;
	ans=abs(arr[1]-arr[2])+abs(arr[1]-arr[0]);
	cout<<ans;
	
	return 0;
}
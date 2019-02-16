#include <iostream>
using namespace std;

int main() {
    
	// your code goes here
	int a;
	int b;
	int n;
	int p;
	int q;
	int r;
	cin>>a>>b;
	n=a-b;
	if(n==0)
	{cout<<1;}
	if(n>=1&&n<=9)
	{
	    cout<<10-n;
	}
	if(n>9)
	{
	    p=n%10;
	    q=n%100;
	    r=q-p;
	    if(p!=0)
	    {cout<<n-p;}
	    else{cout<<n+1;}
	}
	
	return 0;
}

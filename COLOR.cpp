#include<stdio.h>
#include <iostream>
using namespace std;

int main()
{	int t,n,a,b,c,c1,c2,c3;
	
	cin>>t;
	
	for(int i=0;i<t;i++)
	
	{	cin>>n;	
	c1=c2=c3=a=b=c=0;
	    char str[n];    
	    scanf("%s",&str);
		for(int j=0;j<n;j++)
		{
		if(str[j]=='G')// ||str[1]=='G' ||str[2]=='G' )
			c1++;
		 if(str[j]=='B')//||str[1]=='B' ||str[2]=='B' )
			c2++;
		 if(str[j]=='R')//||str[1]=='R'||str[2]=='R' )
			c3++;
		}
		a=c1+c2;
		b=c2+c3;
		c=c3+c1;
		
		
		if(a<=b && a<=c)
		cout<<a<<endl;
		else if(b<=a && b<=c)
		cout<<b<<endl;
		else cout<<c<<endl;
	}
	return 0;
}
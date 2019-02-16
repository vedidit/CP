#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,k;
	cin>>n>>k;
	int flag=0,cnt=0;
	long long int r=sqrt(n);
	unordered_map< int,long long int> m;
	for(int i=1;i<sqrt(n);i++)
	{
		if(n%i==0)
		{
			cnt++;
			m[cnt]=i;
		}
	}
	if(r*r==n)
	{
		cnt++;
		m[cnt]=r;
	
	}
	
	if(r*r==n)
	{
		for(int i=sqrt(n)-1;i>=1;i--)
		{
			if(n%i==0)
			{
				cnt++;
				m[cnt]=(n/i);
			}
		}
	
	}
	
	else
	{
		for(int i=sqrt(n);i>=1;i--)
			{
				if(n%i==0)
				{
					cnt++;
					m[cnt]=(n/i);
				}
			}
	
	}
	
	if(m[k]==0)
	{
		cout<<-1;
	}
	else
	{
		cout<<m[k];
	}

	
	
	
	
	
	// your code goes here
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,ap;
	cin>>n;
	vector<int> v;
	for(int i=0;i<2*n;i++)
	{
		cin>>ap;
		v.push_back(ap);
	}
	sort(v.begin(),v.end());
	int mid=(2*n);
	mid=mid/2;
	mid--;
	int flag=0;
	unordered_map<int,int> a,b;
	for(int i=0;i<=mid;i++)
	{
		a[v[i]]=1;
	}
	for(int i=mid+1;i<v.size();i++)
	{
		b[v[i]]=1;
	}
	for(int i=0;i<=mid;i++)
	{
		if(a[v[i]]==b[v[i]])
		{
			flag=1;
		}
	}
	if(flag)
	{
		cout<<"NO\n";
	}
	else
	{
		cout<<"YES\n";
	}
	
	
	
	
	// your code goes here
	return 0;
}
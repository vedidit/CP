#include <bits/stdc++.h>
using namespace std;

int main()
{
	//a =97
	//A=65
	//'0'=48;
	char s[27],st[27];
	cin>>s;
	cin>>st;
	unordered_map<char,pair<char,char>> m;
	for(int i=0;i<strlen(s);i++)
	{
		m[s[i]].first=st[i];
		m[s[i]].second=(char)((int)(st[i])-32);
	}
	char an[1005];
	//cout<<(int)('z');
	cin>>an;
	for(int i=0;i<strlen(an);i++)
	{
		if((an[i]-'0')>=0 &&(an[i]-'0')<=9 )
		{
			cout<<an[i];
		}
		if((int)an[i]>=65 && (int)(an[i])<=90)
		{
			char u=an[i];
			u=(char)((int)an[i]+32);
			//cout<<an[i];
			cout<<m[u].second;
		}
		if((int)(an[i])>=97 && (int)(an[i])<=122)
		{
			cout<<m[an[i]].first;
		}
	}
	m.clear();
	// your code goes here
	return 0;
}
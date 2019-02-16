#include <iostream>
#include <cmath>
using namespace std;

int main() {
int t;
int n;
cin>>t;
for(int k=0;k<t;k++)
{cin>>n;

	int i=2;
	int isbar=1;
if(n==1)
{cout<<"no \n";}
else{
	int i=2;
	int isbar=1;
	while(i>=2 && i<=(n-1))
	{if(n%i!=0)
	{i=i+1;}
	else{
		if(n%i==0)
	{isbar=0;
	i=n;}
	}}
	if(isbar==1)
	{cout<<"yes \n";}
	if(isbar==0)
	{cout<<"no \n";}
	
}}
return 0;
}
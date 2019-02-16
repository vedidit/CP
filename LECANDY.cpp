#include <iostream>
using namespace std;

int main() {
	// your code goes here
int t;
int n;
int c;
cin>>t;
for(int i=0;i<t;i++)
{
cin>>n>>c;
int arr[n];
int sum=0;
for(int j=0;j<n;j++)
{
cin>>arr[j];
sum=sum+arr[j];
}

if(sum>c)
{
cout<<"No"<<"\n";
}
if(sum<=c)
{cout<<"Yes"<<"\n";}

}}
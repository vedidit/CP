#include <iostream>
using namespace std;
#define brightness 11
#define lim 101
int cnt[brightness][lim][lim];
int main() 
{
	int x,y,s,n,q,c,bright;
	cin>>n>>q>>c;
	for(int i=0;i<n;i++){
		cin>>x>>y>>s;
		cnt[s][x][y]++;
	}
	for(int bright=0;bright<=c;bright++)
	{
		for(int j=1;j<lim;j++)
		{
			for(int i=1;i<lim;i++)
			{
				cnt[bright][j][i]=cnt[bright][j][i]+cnt[bright][j-1][i]+cnt[bright][j][i-1]-cnt[bright][j-1][i-1];
			}
		}
	}
	int x1,t,y1,x2,y2;
	int a=0;
	for(int i=1;i<=q;i++){
		cin>>t>>x1>>y1>>x2>>y2;
		a=0;
		for(int p=0;p<=c;p++){
		int b=(p+t)%(c+1);
		int ans=cnt[p][x2][y2]-cnt[p][x1-1][y2]-cnt[p][x2][y1-1]+cnt[p][x1-1][y1-1];
		int contrib=b*ans;
		a=a+contrib;
		}
		cout<<a<<endl;
	}
	// your code goes here
	return 0;
}
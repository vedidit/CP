#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int a;
	int b;
	int r;
	int p;
	int isbar;
	
	
	for(int i=0;i<t;i++)
	{cin>>a>>b;
	if(b==1)
	{cout<<0<<"\n";}
	else if(a<b)
		{
			r=a;
			cout<<r<<"\n";
		}
		else if(a>b){
			for(int k=1;k<a;k++)
			{
				p=b*k;
				if(p<a)
				{isbar=0;}
				else{if(p>a)
				{r=a-(b*(k-1));
				 cout<<r<<"\n";
				 
				 break;}}
				
				
							}
									}
	}
	
	
	
	
	return 0;
}
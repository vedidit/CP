#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int n,k;
	scanf("%d%d",&n,&k);
	char s[n];
	scanf("%s",&s);
	int cnt[300]={0};
	int m[300]={0};
	for(int i=0;i<n;i++){
		cnt[(int)s[i]]++;
	}
	int flag=0;
	//cout<<cnt['A'];
	for(int i=0;i<n;i++){
		if(m[(int)s[i]]==0 && k==0){
			flag=1;
			break;
		}
		if(m[(int)s[i]]==0 ){
			k--;
			m[(int)s[i]]=1;
		}
		cnt[(int)s[i]]--;
		if(cnt[(int)s[i]]==0){
			k++;
		}
	}
	if(flag==1){
		printf("YES");
	}
	else{
		printf("NO");
	}
}
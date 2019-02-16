#include <bits/stdc++.h>
using namespace std;
#define N 123456
vector<int> g[N];
unordered_map<int,int> cnt,FF;
int sq,A[N],arr[N],in[N],out[N],color[N],ans[N],answer=0,tim=0;
struct node
{
	int L,R,id,k;
}Q[N];
//DFS TIMER WILL HELP US IN FINDING SUBTREE 
//NOT THAT [L-N-1] WILL BE THE QUERY
//LEaRN THIS
void dfs(int s,int parent)
{
	in[s]=++tim;
	A[tim]=color[s];
	for(int i=0;i<g[s].size();i++)
	{
		if(g[s][i]!=parent)
		{
			dfs(g[s][i],s);
		}
	}
	out[s]=tim;
}
bool cmp(node x,node y)
{
	if(x.L/sq!=y.L/sq){
		return(x.L/sq<y.L/sq);
	}
	return (x.R<y.R);
}
void add(int position)
{
	cnt[A[position]]++;
	FF[cnt[A[position]]]++;
}
void remove(int position)
{
	FF[cnt[A[position]]]--;
	cnt[A[position]]--;
	
}

int main()
{
	int n,m,a,b;
	
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		
		scanf("%d",&color[i]);
	}
	for(int i=1;i<=n-1;i++)
	{
		scanf("%d%d",&a,&b);
		g[a].push_back(b);
		g[b].push_back(a);
	}
	dfs(1,0);
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d",&a,&b);
		Q[i].L=in[a];
		Q[i].R=out[a];
		Q[i].k=b;
		Q[i].id=i;
	}
	
	sq=sqrt(n)+1;
	sort(Q+1,Q+m+1,cmp);
	int currL=1,currR=1;
	
	for(int i=1;i<=m;i++)
	{
		int right=Q[i].R;
		int left=Q[i].L;
		int ke=Q[i].k;
		while(currL<left)
		{
			remove(currL);
			currL++;
		}
		while(currL>left)
		{
			add(currL-1);
			currL--;
		}
		while(currR<=right)
		{
			add(currR);
			currR++;
		}
		while(currR>right+1)
		{
			remove(currR-1);
			currR--;
		}
		ans[Q[i].id]=FF[Q[i].k];
	}
	for(int i=1;i<=m;i++)
	{
		printf("%d\n",ans[i]);
	}	
	return 0;
}
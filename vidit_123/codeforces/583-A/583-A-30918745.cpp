#include <iostream>
using namespace std;
struct node{
	int h;
	int v;
};

int main() {
	int n;
	cin>>n;
	int col[n*n+1]={0},row[n*n+1]={0};
	node q[n*n+1];	
	for(int i=1;i<=n*n;i++){
		cin>>q[i].h>>q[i].v;
	//	cout<<q[i].h<<q[i].v;
	}

	
	for(int i=1;i<=n*n;i++){
		if(row[q[i].h]==0 && col[q[i].v]==0){
			row[q[i].h]=1;
			col[q[i].v]=1;
			cout<<i<<" ";
		}
	}
	
	// your code goes here
	return 0;
}
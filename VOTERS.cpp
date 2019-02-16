#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int A[a],B[b],C[c];

	for(int i=0;i<a;i++){cin>>A[i];}
	for(int i=0;i<b;i++){cin>>B[i];}
	for(int i=0;i<c;i++){cin>>C[i];}
	vector<int>p;
	vector<int>q;
	int i=0,j=0;
	while(i<a && j<b){
		if(A[i] == B[j]){
			p.push_back(A[i]);
			i++;
			j++;
		}else if(A[i]<B[j]){
			i++;
		}else if(A[i]>B[j]){
			j++;
		}
	}
	i=0,j=0;
	while(i<p.size() && j<c){
		if(p[i] == C[j]){
			cout<<p[i]<<endl;
			i++;
			j++;
		}else if(p[i]<B[j]){
			i++;
		}else if(p[i]>B[j]){
			j++;
		}	
	}
	


}
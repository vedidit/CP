#include<iostream>
#include<vector>
using namespace std;
#define mod 10000000007
#define ll long long 
typedef matrix vector<vector<ll>> 

matrix multiply(matrix A,matrix B){
	matrix C(3,vector<ll> (3));
	REP(i,2) REP(j,2) REP(k,2)
		C[i][j] = (C[i][j]%mod + (A[i][k]%mod*B[k][j]%mod)%mod)%mod;
	return C;
}

matrix mat_expo(int n,matrix A){	
	if(n == 1){
		return A;
	}if(n%2==0){
		return multiply(mat_expo(n/2,A),mat_expo(n/2,A));
	}
	return multiply(A,mat_expo(n-1,A));
}
int recurse(int n){
	if(n==1){
		return 1;
	}if(n==2){
		return 3;
	}	

}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
	}

}
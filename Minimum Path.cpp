
int pow_mod(int A,int n,int mod){
    if(n==0){
        return 1;
    }
    if(n==1){
        return A%mod;
    }
    if(n%2==0){
        return (pow_mod(A,n/2,mod)%mod*pow_mod(A,n/2,mod)%mod)%mod;
    }
    if(n%2!=0){
        return (A%mod*pow_mod(A,n-1,mod)%mod)%mod;
    }
}
int Solution::solve(int A) {
    if(A==1){
        return 1;
    }
    if(A==2){
        return 4;
    }
    if(A==3){
        return 10;
    }
    int modu = 1000000007;
    int constant=(pow(2,A/2,modu)%modu*A%modu)%modu;
    
    //1 1+2 1+2+3 1+2+3+4 1+2+3+4+5
    int ans=0;
    ans = pow_mod(A,2,modu)%modu;
    int x =  ((A-2)%modu*A%modu)%modu;
    int y = (A%modu-2%modu)%modu;
    ans = ((ans%modu - x%modu)%modu + constant%modu)%modu;
    ans =  (A%modu*(ans%modu))%modu;
    return ans/2;
}

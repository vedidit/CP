#include<bits/stdc++.h>
using namespace std;
#define int long long

int check(int x){
    int y=sqrt(x);
    if(y*y == x){
    return 1;}
    return 0;
}
int to_int(string s){
    int ans=0;
    int x=s.size()-1;
    for(int i=0;i<s.size();i++){
        ans+=pow(10,x)*(s[i]-'0');
        x--;
    }
    return ans;
}
main(){
    int n;
    cin>>n;
    if(check(n)){
        cout<<0;
        return 0;
    }
    string s=to_string(n);
    int ans=1000;
    string h;
    for(int i=0;i<pow(2,s.size());i++){
        string y="";
        int op=0;
        for(int j=0;j<s.size();j++){
            if(i & (1<<j)){
                y+=s[j];
                op++;
            }
        }
        if(op!=0){
            op=s.size()-op;
        }
        int t=to_int(y);

        if(y.size()!=0 && y[0]!='0' && check(t) && op!=0){
            if(ans>=op){
                h=y;
              //  cout<<h<<" ";
            }ans=min(ans,op);
        }
    }
    if(ans==1000){
        cout<<-1;
    }
    else{
        cout<<ans;
    }
}
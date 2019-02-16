#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int x=min(n,m);
    cout<<x+1<<endl;
    int j=0;
    for(int i=x;i>=0;i--){
        cout<<i<<" "<<j<<endl;
        j++;
    }

}
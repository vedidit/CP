#include<bits/stdc++.h>
using namespace std;

struct node{
    int ff;
    int ss;

}q[5005];

bool cmp(node A,node B){
    if(A.ff==B.ff){
        return A.ss<B.ss;
    }
    return A.ff<B.ff;
}

int main(){

    //1st attempt to understand the question :p
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>q[i].ff>>q[i].ss;
    }
    int ans=INT_MAX;
    sort(q,q+n,cmp);
    int lastmin=min(q[0].ff,q[0].ss);
    for(int i=1;i<n;i++){
        if(lastmin<=q[i].ff && lastmin<=q[i].ss){
            lastmin=min(q[i].ff,q[i].ss);
        }
        else if(q[i].ff>=lastmin && lastmin>=q[i].ss){
            lastmin=q[i].ff;
        }
        else if(q[i].ff<lastmin && q[i].ss>lastmin){
            lastmin=q[i].ss;
        }
    }
    cout<<lastmin;
    return 0;
}
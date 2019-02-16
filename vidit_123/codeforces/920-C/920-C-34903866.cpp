#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;

    int temp[n+1],arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        temp[i]=arr[i];
    }
    cin>>s;
    s='#'+s;
    sort(temp+1,temp+n+1);
    int actualpos[200005];
    for(int i=1;i<=n;i++){
        actualpos[temp[i]]=i;
    }
    int aage[n+1]={0};
    int peeche[n+1]={0};
    peeche[1]=0;
    int last=-1;
    for(int i=2;i<s.size();i++){
        if(s[i-1]=='1'){
        	//cout<<i<<" ";
            last=i;
            peeche[i]=peeche[i-1]+1;
        }
    }
    if(s[n-1]=='1'){
        peeche[n]=peeche[n-1]+1;
    }
    aage[n]=0;
    for(int i=n-1;i>=1;i--){
        if(s[i]=='1'){
            aage[i]=aage[i+1]+1;
        }
    }

    int flag=0;
    for(int i=1;i<=n;i++){
        if(actualpos[arr[i]]>i){
            if(aage[i]-(actualpos[arr[i]]-i)<0){
                flag=1;
            }
        }
        else if(actualpos[arr[i]]<i){
            if(peeche[i]-(i-actualpos[arr[i]])<0){
                flag=1;
            }
        }
    }
    if(flag==1){
        cout<<"NO\n";
    }
    else if(flag==0){
        cout<<"YES\n";
    }

}
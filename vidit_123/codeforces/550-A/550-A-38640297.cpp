#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int> a,b;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='A' && s[i+1]=='B'){
            a.push_back(i);
        }
        if(s[i]=='B' && s[i+1]=='A'){
            b.push_back(i);
        }
    }
    if(a.size()==0 || b.size()==0){
        cout<<"NO";
        return 0;
    }
    int p,q,r,t;
    p=a[0];
    q=a[a.size()-1];
    r=b[0];
    t=b[b.size()-1];
    if(abs(p-t)<2 && abs(q-r)<2){
        cout<<"NO";
        return 0;
    }
    else{
        cout<<"YES";
        return 0;
    }
    
    
}
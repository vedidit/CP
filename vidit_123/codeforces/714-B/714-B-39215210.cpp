#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    unordered_map<int,int> mark;
    vector<int> all;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(!mark[x]){
            mark[x]=1;
            all.push_back(x);
        }
    }
    if(all.size()<=2){
        cout<<"YES";
        return 0;
    }
    sort(all.begin(),all.end());
    if(all.size()>3){
        cout<<"NO";
        return 0;
    }
    else if(all.size()==3){
        if(all[2]-all[1] == all[1]-all[0]){
            cout<<"YES";
            return 0;
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    return 0;
}
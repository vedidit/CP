#include<bits/stdc++.h>
using namespace std;
#define int long long
 main(){
    int n;
    cin>>n;
    int arr[n+1];
    multiset<pair<int,int>> s;
    unordered_map<int,int> cnt;

    for(int i=1;i<=n;i++){
        cin>>arr[i];
        s.insert({arr[i],i});
        cnt[arr[i]]++;
    }
    vector<pair<int,int>> v;
    while(!s.empty()){
        pair<int,int> x=*s.begin();
        if(cnt[x.first]==1){
        //    cout<<x.first<<" ";

            v.push_back({x.second,x.first});
            s.erase(s.find(*s.begin()));
        }
        else if(cnt[x.first]>=2){
            cnt[x.first]-=2;
            s.erase(s.find(x));
            pair<int,int> y=*s.begin();
            s.erase(s.find(*s.begin()));
            int k=2*y.first;
            cnt[k]++;
            s.insert({2*(y.first),y.second});
            //cout<<cnt[2]<<" ";
        }
    }
    sort(v.begin(),v.end());
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].second<<" ";
    }



}
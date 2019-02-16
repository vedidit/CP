#include<bits/stdc++.h>
using namespace std;
#define int long long 
int cnt[100005],marked[100005];
vector<int> v;
int dp[100005];
int solve(int pos){
    if(pos<0){
        return 0;
    }
    if(pos==0){
        return cnt[v[0]]*v[0];
    }
    if(dp[pos]!=0){
        return dp[pos];
    }
    else{
        //dp[pos]=0;

        if(v[pos-1]==v[pos]-1){
          //  cout<<cnt[v[pos]]*v[pos]<<" ";
            dp[pos]=max(cnt[v[pos]]*v[pos]+solve(pos-2),solve(pos-1));
        }
        else{
            dp[pos]=cnt[v[pos]]*v[pos]+solve(pos-1);
        }
        return dp[pos];
    }
}

 main(){
    int n;
    cin>>n;
    int arr[n];
  //  long long sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(!marked[arr[i]]){
            marked[arr[i]]=1;
            v.push_back(arr[i]);
        }
       // sum+=arr[i];
        cnt[arr[i]]++;
    }
    sort(v.begin(),v.end());
    int dp[v.size()];
    for(int i=0;i<v.size();i++){
        dp[i]=0;
    }

    cout<<solve(v.size()-1);


}
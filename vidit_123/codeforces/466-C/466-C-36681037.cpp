#include<bits/stdc++.h>
using namespace std;
#define int long long
 main(){
    int n;
    int     sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(n<3 || (sum%3)!=0){
        //cout<<"hi";
        cout<<0<<endl;
        return 0;
    }

    int prefix[n],suffix[n];
    prefix[0]=arr[0];
    suffix[n-1]=arr[n-1];
    map<int,vector<int>> cnt;
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
        cnt[prefix[i]].push_back(i);
    }
    for(int j=n-2;j>=0;j--){
        suffix[j]=suffix[j+1]+arr[j];
    }
   // vector<int> v;
    int ans=0;
  //  cout<<cnt[4000000000][0]<<" ";
    for(int i=0;i<=n-3;i++){

        int f=prefix[i];
        if(f==sum/3){
        int s=2*prefix[i];
        int x=0;
        if(cnt[s].size()==1 && cnt[s][cnt[s].size()-1]!=i && cnt[s][cnt[s].size()-1]!=n-1){
            x=1;
        }
        else if(cnt[s].size()>1){
            x=lower_bound(cnt[s].begin(),cnt[s].end(),i+1)-cnt[s].begin();
            if(cnt[s][cnt[s].size()-1]==n-1){
                x=cnt[s].size()-1-x;
            }
            else{
                x=cnt[s].size()-x;
            }
        }
        ans+=x;
        }
    }
    cout<<ans<<endl;
    return 0;

}
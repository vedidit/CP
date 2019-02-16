#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> v;
        for(int i=1;i<=n;i++){
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});
          //  cout<<x<<y<<" ";
         //   q.push({x,y});
        }
        int z=0;
        for(int i=0;i<n;i++){
            if(z>v[i].second){
                cout<<"0 ";
            }
            else if(z<=v[i].second){
                if(z>=v[i].first){
                        cout<<z<<" ";
                        z=z+1;

                }
                else if(z<v[i].first){
                    cout<<v[i].first<<" ";
                    z=v[i].first+1;
                }

  //              cout<<z<<" ";

            }
        }


        cout<<endl;


    }
}
#include<bits/stdc++.h>
using namespace std;

int tri(int x,int y,int z){
    if(x+y<=z){
        return 0;
    }
    if(y+z<=x){
        return 0;
    }
    if(x+z<=y){
        return 0;
    }
    return 1;
}


int main(){
    int n;
    cin>>n;
    int x;
   // cout<<tri(1,1,6)<<" ";
    long long ans=0;
    //unordered_map<int,int> mark;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int y=i^j;
            if(y>=1 && y<=n && tri(y,i,j)){
                if(y>=j && j>=i ){

                    ans++;
                     // cout<<i<<" "<<j<<" "<<y<<endl;

                }
                //ans++;
            }
        }
    }
    cout<<ans<<endl;

}
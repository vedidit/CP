#include<bits/stdc++.h>
using namespace std;

#define int long long
main(){
    int n;
    cin>>n;
    int arr[n+1];
    int sum=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int y=sum;
    if(y%2==0){
        y=y/2;
    }
    else{
        y=y/2;
        y++;
    }
    int x=arr[1];
    if(x>=y){
        cout<<1;
        return 0;
    }
    for(int i=2;i<=n;i++){
        x=x+arr[i];
        if(x>=y){
            cout<<i;
            return 0;
        }
    }
}
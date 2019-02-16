#include<iostream>
using namespace std;
int main(){
     int t;
    cin>>t;
    while(t--){
  long long int n,m;
  cin>>n>>m;
  if(n==1){
        if(m==2) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
  }
  else if(m==1){
        if(n==2) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
  }
  else if(n%2!=0&&m%2!=0) cout<<"No"<<endl;
  else cout<<"Yes"<<endl;
    }
return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,s;
    cin>>m>>s;
    int x=s;
    int flag=0;
    if((9*m<s) || ( m>1 && s==0)){
        flag=1;
        cout<<-1<<" "<<-1<<endl;
        return 0;
    }
    if(!flag){
    string a;

    while(1){
        if(x==0){
            break;
        }
        for(int i=9;i>0;i--){
            if(x-i>=0){
                x=x-i;
                a+=(char)(i)+48;
                break;
            }
        }
    }
   int n=a.size();
   //cout<<a<<" ";
    for(int i=1;i<=m-n;i++){
        a+='0';
    }
    //cout<<"a= "<<a<<" ";
        int b[a.size()];
        int k=0;
        for(int i=a.size()-1;i>=0;i--){
            b[k]=a[i]-'0';
            k++;
        }

    if(m-n!=0 && a.size()>1){
      //      cout<<"hi";
        //there is atleast 1 zero
        b[0]=1;
        for(int i=1;i<a.size();i++){
            if(b[i]!=0){
                b[i]--;
                break;
            }
        }
    }
    for(int i=0;i<a.size();i++){
        cout<<b[i];
    }
    cout<<" ";
     cout<<a;
    cout<<endl;
    }
    return 0;

}
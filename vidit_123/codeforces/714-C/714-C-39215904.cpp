#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    unordered_map<string,int> cnt;
    while(t--){
        char ch;
        cin>>ch;
        long long int x;
        string s;
        cin>>s;
        if(ch=='+'){
            int l=s.size();
            string p;
            if(s.size()<18){
                for(int i=0;i<18-s.size();i++){
                    p+='0';
                }
                p=p+s;
            }
            if(s.size()==18){
                p=s;
           }
           for(int i=0;i<p.size();i++){
                if((p[i]-'0')%2!=0){
                    p[i]='1';
                }
                else{
                    p[i]='0';
                }
           }
           cnt[p]++;
         //  cout<<p<<" ";
        }
        else if(ch=='-'){
            string p;
            if(s.size()<18){
                for(int i=0;i<18-s.size();i++){
                    p+='0';
                }
                p=p+s;
            }
            if(s.size()==18){
                p=s;
           }
           for(int i=0;i<p.size();i++){
                if((p[i]-'0')%2!=0){
                    p[i]='1';
                }
                else{
                    p[i]='0';
                }
           }
            cnt[p]--;
        }
        else if(ch=='?'){
            string p;
            if(s.size()<18){
                for(int i=0;i<18-s.size();i++){
                    p+='0';
                }
                p=p+s;
            }
            if(s.size()==18){
                p=s;
            }
           
            cout<<cnt[p]<<endl;
        }
    }
}
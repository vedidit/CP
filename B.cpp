#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        map<string,int> tim;
        map<string,int> mark;
        cin>>n;
        int ans=0;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            if(mark[s]!=0){
                ans += tim[s]/2;
                continue;
            }
            else if(mark[s]==0){
                int x = 2;
                for(int j=1;j<s.size();j++){
                    if(s[j]=='d' &&(s[j-1]=='k' || s[j-1]=='j')){
                        x+=2;
                    }
                    else if(s[j]=='f' &&(s[j-1]=='j' || s[j-1]=='k')){
                        x+=2;
                    }
                    else if(s[j]=='k' &&(s[j-1]=='d' || s[j-1]=='f')){
                        x+=2;
                    }
                    else if(s[j]=='j' &&(s[j-1]=='d' || s[j-1]=='f')){
                        x+=2;
                    }
                    else if(s[j]=='k' &&(s[j-1]=='j' || s[j-1]=='k')){
                        x+=4;
                    }else if(s[j]=='j' &&(s[j-1]=='j' || s[j-1]=='k')){
                        x+=4;
                    }else if(s[j]=='d' &&(s[j-1]=='d' || s[j-1]=='f')){
                        x+=4;
                    }
                    else if(s[j]=='f' &&(s[j-1]=='d' || s[j-1]=='f')){
                        x+=4;
                    }
                }
                mark[s]=1;
                tim[s]=x;
                ans+=x;
            }
        }
        cout<<(int)(ans)<<endl;
    }
}

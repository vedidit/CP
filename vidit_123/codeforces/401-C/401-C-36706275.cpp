#include<bits/stdc++.h>
using namespace std;
//BAHOT HI TATTI APPROACHES BUT KUCH NAI HOTA AISE HI SEEKHTE HAI !

int main(){
    //1st Attempt
    /*int n,m;
    int t;
    cin>>t;
    while(t--){
    cin>>n>>m;
    int flag=0;
    if(m>=2*n+3 || m<n-1 || n<m-2){
        cout<<-1<<endl;
       // return 0;
    }
    else if(n==m-2){
        int cnt=m;
        for(int i=1;i<=n+m-1;i++){
            if(i%2==0){
                cout<<0;
            }
            else{
                cnt--;
                cout<<1;
            }
        }
        for(int i=1;i<=cnt;i++){
            cout<<1;
        }

    }
    else if(m<2*n+3 && m>=n-1){
        //110110110
        if(m==n-1){
            for(int i=0;i<n;i++){
                if(i%2==0){
                    cout<<1;
                }
                else{
                    cout<<0;
                }
            }
        }
        else{
            for(int i=1;i<=m+n;i++){
                if(i%3==0){
                    cout<<0;
                }
                else{
                    cout<<1;
                }
            }
        }
    }

    }*/
    //2nd Attempt
    //Greedy
    int n,m;
    cin>>n>>m;
    int flag=0;
    int arr[2*n+2*m+1];
    for(int i=0;i<=2*n+2*m;i++){
        arr[i]=-1;
    }
    if(m==1 && n==1){
            cout<<"10";
            return 0;
    }
    if(m>=n){

        int cnt0=n,cnt1=m;


        for(int i=1;i<=2*n+2*m;i+=2){
            if(cnt1==0){
                break;
            }
            else{
                arr[i]=1;
                cnt1--;
            }
        }

        for(int i=4;i<=2*m+2;i+=4){
            //if(cnt0==0 || i>m*4-4){break;}
            if(cnt0>=1){
                arr[i]=0;
                cnt0--;
            }
        }

        if(cnt0>=1){
            for(int i=0;i<=2*n+2*m;i++){
                if(cnt0==0){
                    break;
                }
                else if(arr[i]==-1 && cnt0>=1){
                    cnt0--;
                    arr[i]=0;
                }
            }
        }
        if(cnt0>=1){
            flag=1;
        }
        string ans;
        for(int i=0;i<=2*n+2*m;i++){
            if(arr[i]!=-1){
                ans+=to_string(arr[i]);
            }
        }
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i]=='0' && ans[i+1]=='0'){
                flag=1;
                break;
            }
        }
        for(int i=0;i<=ans.size()-3;i++){
            if(ans[i]=='1' && ans[i+1]=='1' && ans[i+2]=='1'){
                flag=1;
                break;
            }
        }
        if(flag){
            cout<<-1<<endl;
        }
        else if(!flag){
            cout<<ans<<endl;
        }
    }
    else{
        if(m!=n-1){
            cout<<-1<<endl;
        }
        else{
            for(int i=1;i<=n+m;i++){
                if(i%2==0){
                    cout<<1;
                }
                else{
                    cout<<0;
                }
            }
            cout<<endl;
        }

    }






    return 0;
}
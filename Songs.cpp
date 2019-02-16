/*input
1
6
20 30 40 100 160 200 
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int myUpperBound(int arr[],int lo,int hi,int val){
    int ans=INT_MAX;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]==val){
            ans=mid;
            lo=mid+1;
        }else if(arr[mid]>val){
            hi=mid-1;
        }else{
            lo=mid+1;
        }
    }
    return ans;
}
int myLowerBound(int arr[],int lo,int hi,int val){
    int ans = -1;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]<val){
            lo=mid+1;
        }else if(arr[mid]==val){
            ans=mid;
            hi=mid-1;
        }else{
            hi=mid-1;
        }
    }
    return ans;

}
int main(){

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int songs[n];
		for(int i=0;i<n;i++){
			cin>>songs[i];
		}
		sort(songs,songs+n);
		if(n==1){
			cout<<0<<endl;
		}else{
			int ans = 0 ;
			int ans1=0;
			int max_sum = songs[n-1]+songs[n-2];
			for(int i=0;i<n;i++){
				for(int sum=60;sum<=max_sum;sum+=60){
					int x = sum-songs[i];
					int a = myUpperBound(songs,i+1,n-1,x);
					int b = myLowerBound(songs,i+1,n-1,x);
					if(a!=INT_MAX && b!=-1){
						ans1+=b-a+1;
					}
					ans  += upper_bound(songs+i+1,songs+n,x) - lower_bound(songs+i+1,songs+n,x);
				}
			}
			cout<<ans<<" "<<ans1<<endl;
		}
	}

}
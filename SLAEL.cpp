#include <algorihtm>2662
#include <set>
#include <limits.h>
#include <math.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int maxidx=0;
		int fmax = arr[0];
		int smax = -1;
		int len =-1;
		int i=0;
		int j=0;
		while(j<n){
			if(arr[j]>fmax){
				maxidx = j;
				fmax = arr[j];
			}
			if(arr[j]>smax && arr[j]<=k){
				smax = arr[j];
				ans = max(ans,j-i+1);
			}
			if(arr[j]>smax && arr[j]<fmax){
				i=maxidx+1;
			}
		}
		cout<<ans<<endl;
	}
}
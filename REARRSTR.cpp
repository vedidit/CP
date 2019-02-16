/*input
3
aab
ab
aa
*/

#include<math.h>
#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a=0,b=0;
		string s;
		cin>>s;

		for(int i=0;i<s.size();i++){
			if(s[i]=='a'){
				a++;
			}else{
				b++;
			}
		}
		if(abs(a-b)!=1 && abs(a-b)!=0){
			cout<<-1<<endl;
		}else{
			if(a==b){
				for(int i=0;i<a;i++){
					cout<<"ab";
				}
			}else{
				if(a>b){
					for(int i=0;i<b;i++){
						cout<<"ab";
					}cout<<"a";
				}if(b>a){
					for(int i=0;i<a;i++){
						cout<<"ba";
					}cout<<"b";
				}
			}
			cout<<endl;
		}
	}
}
#include <iostream>
using namespace std;

int main() {
	int x,y;
	cin>>x>>y;
	if((x==2 && y==4) || (x==y) || (x==4 && y==2)){
		cout<<"=";
	}
	else{
		if(y==1){
			cout<<">";
		}
		else if(x==1){
			cout<<"<";
		}
		else if(x==3 && y==2){
			cout<<">";
		}
		else if(x==2 && y==3){
			cout<<"<";
		}
		else if(x<y){
			cout<<">";
		}
		else if(x>y){
			cout<<"<";
		}
		
	}
	// your code goes here
	return 0;
}
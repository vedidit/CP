#include <iostream>

using namespace std;

int main() {
	int y;
	char s[5],p,t;
	
	cin>>p>>t>>y;

	int f1=0,f2=0;
	int i=y;
	char temp=p;
	char next;
	while(1){
		if(i==0){
			break;
		}
		if(p=='^'){
			next='>';
		}
		if(p=='>'){
			next='v';
		}
		if(p=='v'){
			next='<';
		}
		if(p=='<'){
			next='^';
		}
		p=next;
		i--;
	}
	if(next==t){
		f1=1;
	}
	p=temp;
	next='0';
	int j=y;
	while(1){
		if(j==0){
			break;
		}
		if(p=='^'){
			next='<';
		}
		if(p=='<'){
			next='v';
		}
		if(p=='v'){
			next='>';
		}
		if(p=='>'){
			next='^';
		}
		p=next;
		j--;
	}
	if(next==t){
		f2=1;
	}
	//cout<<j;
	if(f1==1 && f2==0 && i==0){
		cout<<"cw";
	}
	if(f2==1 && f1==0 && j==0){
		cout<<"ccw";
	}
	if((f1==0 && f2==0)|| (f1==1 && f2==1)){
		cout<<"undefined";
	}
	
	// your code goes here
	return 0;
}
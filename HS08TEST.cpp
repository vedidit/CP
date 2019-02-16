#include <iostream>
using namespace std;
#include<iomanip>


int main() {
    int X;
	float Y,bal;
	cin>>X>>Y;
	if((X%5==0)&&((X+0.5)<=Y))
	{	bal=Y-X-(0.5);
		cout.setf(ios::fixed);
	    cout<<setprecision(2)<<bal;
	}
	else
	{cout.setf(ios::fixed);
	cout<<setprecision(2)<<Y;
}
return 0;
}

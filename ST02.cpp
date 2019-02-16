#include <stdio.h>

int main(void) {
	// your code goes here
	int x;
	scanf("%d",&x);
	int c;
	c=x/2;
	x=x-c;
	printf("%d\n",(c+1)*(x+1));
	
	
	return 0;
}

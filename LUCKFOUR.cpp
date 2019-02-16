#include <stdio.h>

int main(void) {
	long  int t,n,count;
	scanf("%ld",&t);
	while(t--)
	{
		count=0;
		scanf("%ld",&n);
		
		while(n!=0)
		{
			if(n%10==4)
			{
				count++;
			}
			n=n/10;
			
			
		}
		
		printf("%ld \n",count);
		
	}
	return 0;
}

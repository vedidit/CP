#include <stdio.h>

int main(void) {
	// your code goes here
	
	
	int t,g,i,n,q;
	
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&g);
		while(g--)
		{
			scanf("%d %d %d",&i,&n,&q);
			if(q==i)
			{
				printf("%d\n",n/2);
			}
			else{
				printf("%d\n",n-n/2);
			}			
			
			
		}
		
		
		
	}
	
	return 0;
}
